#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> index;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') index.push_back(i + 1);
    }
    cout << index.size() << '\n';
    for (auto x : index) cout << x << " ";
    cout << '\n';
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