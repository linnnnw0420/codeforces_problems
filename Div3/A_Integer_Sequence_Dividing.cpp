#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum % 2 == 0) {
        cout << 0;
    }
    else cout << 1;

    return 0;
}