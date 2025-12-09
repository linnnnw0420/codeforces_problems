#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    std::cin >> n >> k;
    vector<int> s(n), t(n);
    map<int, int> m;
    for(int i = 0; i < n; ++i) std::cin >> s[i];
    for(int i = 0; i < n; ++i) std::cin >> t[i];
    for(int i = 0; i < n; ++i) {
        ++m[t[i] % k];
    }
    for(int i = 0; i < n; ++i) {
        int a = s[i] % k, b = (k - a) % k;
        if (a == b || a == 0) {
            --m[a];
        }
        else {
            if (m[a] > 0) --m[a];
            else if (m[b] > 0) --m[b];
            else {
                cout << "NO\n";
                return;
            }
        }
    }
    for (auto &[r, cnt] : m) {
        if (cnt != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES" << '\n';

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