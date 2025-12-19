#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n, x;
    std::cin >> n >> x;
    vector<int> a(n);
    for(auto &x : a) std::cin >> x;
    std::sort(a.begin(), a.end());
    int cnt = 0, small = a[n - 1];
    int ans = 0;
    for (int i = n - 1; i >= 0; --i) {
        ++cnt;
        small = std::min(small, a[i]);
        if (a[i] >= x || small * cnt >= x) {
            ++ans;
            cnt = 0;
        }
    }
    std::cout << ans << '\n';
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