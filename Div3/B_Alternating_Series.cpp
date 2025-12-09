#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            std::cout << -1 << " ";
        }
        else {
            if (i == n - 1) cout << 2;
            else cout << 3 << " ";
        }
    }
    cout << '\n';
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