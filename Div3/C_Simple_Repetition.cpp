#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool checkprime(int n) {
    for(int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return 1;
}
void solve() {

    int x, k;
    std::cin >> x >> k;
    if (x == 1) {
        if (k == 2) cout << "YES\n";
        else cout << "NO\n";
    }
    else if (checkprime(x) && k == 1) {
        cout << "YES\n";
    }
    else cout << "NO\n";

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