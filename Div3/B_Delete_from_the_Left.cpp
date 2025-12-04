#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    int count = 0;
    int top = s.size() - 1;
    int down = t.size() - 1;
    while (s[top] == t[down] && top >= 0 && down >= 0) {
        count++;
        top--,down--;
    }
    int ans = (s.size() - count) + (t.size() - count);
    cout << ans;

    return 0;
}