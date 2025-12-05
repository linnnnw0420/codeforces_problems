#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string t;
    int increase = 1;
    cin >> n >> t;
    int start = 0;
    while (start < n) {
        cout << t[start];
        start += increase;
        increase++;
    }
    return 0;
}