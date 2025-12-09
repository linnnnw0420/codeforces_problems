#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> num(20);
    unordered_map<ll, ll> m;
    ll ans = 0;
    for (int i = 0; i < 20; ++i) {
        num[i] = pow(3, i);
        m[i] = pow(3, i + 1) + i * pow(3, i - 1);
    }
    for (int i = 19; i >= 0; i--) {
        if (n / num[i] > 0) {
            ans += n / num[i] * m[i];
            n -= n / num[i] * num[i];
        }
    }
    cout << ans << '\n';
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