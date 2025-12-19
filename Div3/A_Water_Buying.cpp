#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n, a, b;
    std::cin >> n >> a >> b;
    double ae = a * 1.0, be = b / 2.0;
    ll ans = 0;
    if (be <= ae) {
        ans += n / 2 * b;
        ll r = n % 2;
        ans += r * a;
        std::cout << ans << '\n';
    }
    else std::cout << n * a << '\n';

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