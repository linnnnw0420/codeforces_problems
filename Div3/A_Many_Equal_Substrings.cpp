#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string t;
    cin >> n >> k >> t;
    int L = 0;
    for (int i = n - 1; i >= 1; --i) {
        bool ok = 1;
        for (int j = 0; j < i; j++) {
            if (t[j] != t[n - i + j]){
                ok = 0;
                break;
            }
        }
        if (ok) {
            L = i;
            break;
        }
    }
    string ans = t;
    string tail = t.substr(L);
    for (int i = 1; i < k; ++i) {
        ans += tail;
    }
    cout << ans;
    return 0;
}