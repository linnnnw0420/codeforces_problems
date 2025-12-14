#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int curr = a[0];
    int count = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] - curr >= 2) {
            count++;
            curr = a[i];
        }
    }
    cout << count << '\n';
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