#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll a, b, k;
    cin >> a >> b >> k;
    ll rem = k % 2;
    if (rem == 0) {
        cout << (a - b) * (k / 2) << '\n';
    }
    else {
        cout << (a - b) * (k / 2) + a << '\n';
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