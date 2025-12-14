#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, m;
    std::cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m, 0));
    unordered_map<int, int> r, c;
    int max = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
            max = std::max(a[i][j], max);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == max) {
                ++count;
                r[i]++, c[j]++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int overlap = 0;
            if (a[i][j] == max) overlap = 1;
            if (r[i] + c[j] - overlap == count) {
                std::cout << max - 1 << '\n';
                return;
            }
        }
    }
    std::cout << max << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        //cout << "TEST cass " << t << '\n';
        solve();
    }

    return 0;
}