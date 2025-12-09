#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    std::cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }
    int ans = 1;
    for(int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            ans += a[i] - b[i];
        }
    }
    std::cout << ans << '\n';
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