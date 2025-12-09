#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    std::cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int count = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            count++;
        }
        else {
            count = 0;
        }
        if (count == k) {
            ans++, ++i;
            count = 0;
        }
        
    }
    std::cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}