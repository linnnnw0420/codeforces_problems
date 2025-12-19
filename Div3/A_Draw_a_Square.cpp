#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int l, r, d, u;
    std::cin >> l >> r >> d >> u;
    if (r == u && r == l && r == d) {
        std::cout << "YES\n";
    }
    else std::cout << "NO\n";

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