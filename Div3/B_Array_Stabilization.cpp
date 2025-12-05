#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    int mi = a.front(), ma = a.back();
    int mi2, ma2;
    int diff = ma - mi;
    if (diff == 0) {
        cout << 0;
        return 0;
    }
    mi2 = a[1];
    ma2 = a[n - 2];
    int ans = min(ma2 - mi, ma - mi2);
    cout << ans;
    return 0;
}