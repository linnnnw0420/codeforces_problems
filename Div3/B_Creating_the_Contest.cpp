#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> bound(n);
    for (int i = 0; i < n; ++i) {
        bound[i] = a[i] * 2;
    }
    int length = 1, start = bound[0];
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] <= start) {
            length++;
        }
        else {
            ans = max(length, ans);
            length = 1;
        }
        start = bound[i];
    }
    ans = max(length, ans);

    cout << ans;

    return 0;
}