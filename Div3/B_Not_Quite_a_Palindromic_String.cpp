#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n, k;
    string t;
    cin >> n >> k >> t;
    int count0 = 0, count1= 0;
    for (int i = 0; i < n; ++i) {
        if (t[i] == '0') {
            count0++;
        }
        else count1++;
    }
    int p0 = count0 / 2, p1 = count1 / 2;
    while (k > 0) {
        if (p0 > p1) {
            p0--;
        }
        else p1--;
        k--;
    }
    if (p0 == p1) {
        cout << "YES\n";
    }
    else cout << "NO\n";
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