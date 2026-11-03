#!/usr/bin/env python3
"""Fetch a user's public Codeforces data from the official API.

Run:
    python scripts/fetch_codeforces.py --handle Linw04207 --out data/codeforces/Linw04207

Requires only the Python standard library. All source records are preserved
without converting verdicts, tags, or contest participation.
"""
import argparse
import datetime as dt
import json
import os
from pathlib import Path
import random
import sys
import time
from urllib.error import HTTPError, URLError
from urllib.parse import urlencode
from urllib.request import Request, urlopen

BASE = "https://codeforces.com/api/"
LAST_REQUEST_AT = 0.0


def api(method, **params):
    global LAST_REQUEST_AT
    url = BASE + method + "?" + urlencode(params)
    for attempt in range(6):
        delay = 2.2 - (time.monotonic() - LAST_REQUEST_AT)
        if delay > 0:
            time.sleep(delay)
        try:
            LAST_REQUEST_AT = time.monotonic()
            req = Request(url, headers={
                "User-Agent": "Mozilla/5.0 (compatible; PublicCodeforcesProfileSync/1.0)",
                "Accept": "application/json",
            })
            with urlopen(req, timeout=40) as response:
                body = response.read()
            payload = json.loads(body.decode("utf-8"))
            if payload.get("status") == "OK":
                return payload["result"]
            comment = payload.get("comment", "Unknown API error")
            if "Call limit exceeded" not in comment or attempt == 5:
                raise RuntimeError(f"{method}: Codeforces API FAILED: {comment}")
            err = f"Codeforces throttled {method}: {comment}"
        except (URLError, HTTPError, TimeoutError, json.JSONDecodeError) as exc:
            err = f"{method}: {type(exc).__name__}: {exc}"
        if attempt == 5:
            raise RuntimeError(err)
        wait = min(45, 3 * (2 ** attempt)) + random.random()
        print(f"Retry {attempt + 1}/5: {err}; sleeping {wait:.1f}s", file=sys.stderr)
        time.sleep(wait)
    raise AssertionError("unreachable")


def atomic_json(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    temp = path.with_suffix(path.suffix + ".tmp")
    with temp.open("w", encoding="utf-8") as f:
        json.dump(value, f, ensure_ascii=False, indent=2)
        f.write("\n")
    os.replace(temp, path)


def main():
    parser = argparse.ArgumentParser(description="Fetch raw public Codeforces submissions and rating history.")
    parser.add_argument("--handle", required=True)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--page-size", type=int, default=500)
    args = parser.parse_args()
    if not 1 <= args.page_size <= 10000:
        parser.error("page-size must be 1..10000")

    print(f"Fetching {args.handle} from Codeforces official API", flush=True)
    user = api("user.info", handles=args.handle)
    ratings = api("user.rating", handle=args.handle)
    submissions = []
    start = 1
    while True:
        page = api("user.status", handle=args.handle, **{"from": start, "count": args.page_size})
        submissions.extend(page)
        print(f"Fetched {len(submissions)} submissions", flush=True)
        if len(page) < args.page_size:
            break
        start += len(page)

    ids = [entry["id"] for entry in submissions]
    if len(ids) != len(set(ids)):
        raise RuntimeError("Duplicate submission IDs across API pages; refusing to save an inconsistent snapshot")
    now = dt.datetime.now(dt.timezone.utc).isoformat()
    atomic_json(args.out / "user.json", {"status": "OK", "result": user})
    atomic_json(args.out / "rating.json", {"status": "OK", "result": ratings})
    atomic_json(args.out / "submissions.json", {"status": "OK", "result": submissions})
    atomic_json(args.out / "fetch_metadata.json", {
        "handle": args.handle,
        "fetched_at_utc": now,
        "source": BASE,
        "submission_count": len(submissions),
        "rating_events": len(ratings),
        "newest_submission_id": max(ids) if ids else None,
        "oldest_submission_id": min(ids) if ids else None,
    })
    print(f"SUCCESS: {len(submissions)} raw submissions saved to {args.out}", flush=True)


if __name__ == "__main__":
    main()
