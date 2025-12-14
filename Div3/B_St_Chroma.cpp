#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n, k;
    cin >> n >> k;
    if (n == k) {
        for (int i = 0; i < n; ++i) {
            cout << i << " ";
        }
    }
    else {
        for (int i = 0; i < n; ++i ) {
            if (i == k) continue;
            cout << i << " ";
        }
        cout << k;
    }
    cout << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){ 
        solve();
    }

    return 0;
}