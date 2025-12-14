#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, s;
    std::cin >> n >> s;
    std::vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    int f = abs(s - a.front()), e = abs(s - a.back());
    if (f > e) {
        std::cout << e + (a.back() - a.front()) << '\n';
    } 
    else if (e > f) {
        std::cout << f + (a.back() - a.front()) << '\n';
    }
    else std::cout << f + (a.back() - a.front()) << '\n';
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