#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    string s;
    std::cin >> n >> s;
    auto end = s.back();
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != end) ans++;
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