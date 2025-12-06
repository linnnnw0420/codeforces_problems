#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i * 2 <= n; ++i) {
        if ((n - 2 * i) % 4 == 0) ans++;
    }
    cout << ans << '\n';
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}