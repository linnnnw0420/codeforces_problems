#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n;
    string s;
    std::cin >> n >> s;
    std::unordered_map<char, int> m;
    m[s.front()] = 1, m[s.back()] = 1;
    for (int i = 1; i < n - 1; ++i) {
        m[s[i]]++;
        if (m[s[i]] == 2) {
            std::cout << "YES\n";
            return;
        }
    }
    std::cout << "NO\n";

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