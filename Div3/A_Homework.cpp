#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, m;
    string a, b, c;
    cin >> n >> a >> m >> b >> c;

    for (int i = 0; i < m; ++i) {
        if(c[i] == 'V') {
            a.insert(a.begin(), b[i]);
        }
        else {
            a.push_back(b[i]);
        }
    } 
    cout << a << '\n';
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