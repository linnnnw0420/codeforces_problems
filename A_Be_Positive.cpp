#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    int nega = 0, ze = 0;
    int pro = 1;
    int ans = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 0) nega++;
        if (a[i] == 0) ze++;
        pro *= a[i];
    }
    if (pro == -1) {
        ans += 2;
        cout << ans << '\n';
    }
    else if (pro == 0) {
        ans += ze;
        if (nega % 2 == 1) {
            ans += 2;
        }     
        cout << ans << '\n';
    }
    else {
        cout << 0 << '\n';
    }
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