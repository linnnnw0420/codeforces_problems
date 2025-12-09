#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int L, v, l, r;
        cin >> L >> v >> l >> r;
        int ans = 0;
        int before = (l - 1) / v;
        int now = r / v;
        int total = L / v;
        ans = total - (now - before);
        cout << ans << '\n';
    }

    return 0;
}