#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n, mi = 10;
    std::cin >> n;
    while (n > 0) {
        mi = std::min(mi, n % 10);
        n /= 10;
    }
    std::cout << mi << '\n';
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