#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<bool> a(m + 1, 0);
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            a[j] = 1;
        }
    }
    int count = 0;
    for (int i = 1; i < m + 1; i++) {
        if (!a[i]) count++;
    }
    cout << count << '\n';
    for (int i = 1; i < m + 1; i++) {
        if(!a[i]) {
            cout << i << " ";
        }
    }
    return 0;
}