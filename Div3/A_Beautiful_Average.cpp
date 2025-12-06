#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int maxsum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; ++k) {
                sum += a[i];
            }
            maxsum = std::max(maxsum, sum / (j - i + 1));
        }
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