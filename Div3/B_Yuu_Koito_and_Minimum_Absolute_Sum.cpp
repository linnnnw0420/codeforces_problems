#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()  {
    int n;
    cin >> n;
    int sum;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int begin = a.front(), end = a.back();
    if (begin == -1 && end == -1) {
        a[0] = 0;
        a[n - 1] = 0;
        cout << '0' << '\n';
    }
    else if (begin == -1) {
        a[0] = end;
        cout << '0' << '\n';
    }
    else if (end == -1) {
        a[n - 1] = begin;
        cout << 0 << '\n';  
    }
    else {
        cout << abs(end - begin) << '\n';
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == -1) cout << 0 << " ";
        else cout << a[i] << " ";
    }
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