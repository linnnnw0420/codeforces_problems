#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    int maxsum = -1;
    for (int i = 0; i < n - 1; i += 2) {
        maxsum = std::max(maxsum, abs(a[i] - a[i + 1]));
    }
    cout << maxsum << '\n';
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