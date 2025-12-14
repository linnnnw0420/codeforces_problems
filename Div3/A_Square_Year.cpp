#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << " " << 0 << '\n';
        return;
    }
    if ((int)sqrt(n) * (int)sqrt(n) == n) {
        cout << 1 << " " << (int)sqrt(n) - 1 << '\n';
    }
    else cout << -1 << '\n';
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