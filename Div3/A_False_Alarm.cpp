#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n, k, l = -1, r = -1;
    std::cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] == 1 && l == -1) l = i;
        if (a[i] == 1) r = i;
    }
    if (r - l + 1 <= k) std::cout << "YES\n";
    else std::cout << "NO\n";
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