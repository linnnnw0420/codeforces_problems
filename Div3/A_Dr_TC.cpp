#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int n;
    string t;
    int count1 = 0, count0 = 0;
    cin >> n >> t;
    for (int i = 0; i < n; ++i) {
        if (t[i] == '0') {
            count0++;
        }
        else ++count1;
    } 
    cout << (count1 - 1) * count1 + (count0 * (count1 + 1)) << '\n';
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