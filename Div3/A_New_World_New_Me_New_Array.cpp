#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, k, p;
    std::cin >> n >> k >> p;
    int b = (int)ceil(abs(k) * 1.0 / p);
    if (b <= n) std::cout << b << "\n";
    else std::cout << -1 << "\n";
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