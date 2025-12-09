#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, y, r;
    std::cin >> n >> y >> r;
    int yp = y / 2;
    if (yp + r > n) {
        std::cout << n << '\n';
    }
    else std::cout << r + yp << '\n';
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