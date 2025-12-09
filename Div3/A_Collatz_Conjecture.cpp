#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int x, k;
    cin >> k >> x;  
    for (int i = 0; i < k; ++i) {
        if ((x - 1) % 3 == 0 && (x - 1) / 3 % 2 != 0) {
            x = (x - 1) / 3;
        }
        else {
            x *= 2;
        }
    }
    cout << x << '\n';
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