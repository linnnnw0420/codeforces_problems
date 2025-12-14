#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n;
    cin >> n;
    cout << 1 << " ";
    for (int i = n; i > 2; i--) {
        std::cout << i << " ";
    }
    cout << 2 << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}