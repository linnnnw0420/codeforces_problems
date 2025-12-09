#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r;
    cin >> n >> r;
    vector<int> a(n), index;
    for (auto &x : a) cin >> x;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) index.push_back(i);
    }
    if (index.empty() || index[0] - r + 1 > 0) {
        cout << -1;
        return 0;
    }
    int right = 0, curr = -1, count = 0;
    while (right < n) {
        bool valid = 0;
        for (int i = index.size() - 1; i > curr; --i) {
            if (index[i] - r  + 1 <= right) {
                curr = i;
                right = index[i] + r;
                ++count;
                valid = 1;
                break;
            }
        }
        if (!valid) {
            cout << -1;
            return 0;
        }
    }
    
    cout << count;
    return 0;
}