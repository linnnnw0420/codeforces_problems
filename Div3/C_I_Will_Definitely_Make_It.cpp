#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    std::cin >> n >> k;
    int water = 1;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int start = a[k - 1];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] > start) {
            int d = a[i] - start;
            int w = abs(start - water) + 1;
            if (d > w) {
                std::cout << "NO\n";
                return;
            }
            else {
                start = a[i];
                water += d;
            }
        }
    }
    std::cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}