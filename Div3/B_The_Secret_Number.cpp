#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> ans;
    ll start = 10;
    while (n / start >= 1) {
        ll a = start + 1;
        if (n % a == 0) {
            ans.push_back(n / a);
        }
        start *= 10;
    }
    if (ans.empty()) {
        cout << 0 << '\n';
    }
    else {
        cout << ans.size() << '\n';
        for (int i = ans.size() - 1; i >= 0; --i) {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}