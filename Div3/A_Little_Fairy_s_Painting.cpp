#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    ll tmp;
    ll total = pow(10, 18);
    unordered_set<ll> s;
    for(int i = 0; i < n; ++i) {
        std::cin >> tmp;
        s.insert(tmp);
    }
    while (!s.contains(s.size())) {
        s.insert(s.size());
    }
    cout << s.size() << '\n'; 
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