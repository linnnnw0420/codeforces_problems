#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    char c = 97 + k - 1;
    char a = 'a';
    for (int i = 0; i < n; i++) {
        if (a > c) a = 97;
        cout << (char)a;
        a++;
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