#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, j, k;
    std::cin >> n >> j >> k;
    vector<int> a(n);
    for(auto &x : a) std::cin >> x;
    int p = a[j - 1];
    std::sort(a.begin(), a.end());
    if (k == 1) {
        if (p >= a[n - 1]) std::cout << "YES\n";
        else std::cout << "NO\n";
    } 
    else {
        cout << "YES\n";
    }

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