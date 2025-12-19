#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int l1, r1, l2, r2;
    std::cin >> l1 >> r1 >> l2 >> r2;
    if (l1 == r2) std::cout << l1 << " " << l2 << '\n';
    else std::cout << l1 << " " << r2 << '\n';
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