#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    int count2 = 2, count5 = 1, count3 = 1, count0 = 3, count1 = 1;
    int n;
    std::cin >> n;
    vector<int> a(n);
    for(auto &x : a) std::cin >> x;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 2) count2--;
        if (a[i] == 5) count5--;
        if (a[i] == 0) count0--;
        if (a[i] == 1) count1--;
        if (a[i] == 3) count3--;

        if (count2 <= 0 && count1 <= 0 && count3 <= 0 && count5 <= 0 && count0 <= 0) {
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';

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