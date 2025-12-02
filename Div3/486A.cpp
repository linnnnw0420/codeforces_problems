#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    unordered_set<int> s;
    vector<int> ans;
    for (auto &x : a) cin >> x;
    for (int i = 0; i < n; ++i) {
        if (s.contains(a[i])) continue;
        ans.push_back(i + 1);
        s.insert(a[i]);
    }
    if (ans.size() >= k) {
        cout << "YES" << '\n';
        for (int i = 0; i < k; ++i) cout << ans[i] << " ";
    }
    else {cout << "NO"; }

    return 0;
}