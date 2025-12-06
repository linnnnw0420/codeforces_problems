#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    vector<vector<int>> dp(n + 1, vector<int> (n + 1));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        dp[0][i + 1] = dp[0][i] - a[i];
    }
    for (int i = 0; i < n; i++) {
        dp[i + 1][0] = b[i] - dp[i][0];
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (i + j >= n + 1) {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
            else dp[i][j] = std::max(b[i] - dp[i - 1][j], dp[i][j - 1] - a[i]);
            //cout << dp[i][j] << ' ';
        }
        //cout << '\n';
    }
    for (auto row : dp) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << '\n';
    }
    cout << dp[n][n] << '\n';
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