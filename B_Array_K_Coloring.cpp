#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int req = k;
    vector<int> a(n);
    vector<vector<bool>> valid(5001, vector<bool> (5001, 0));
    unordered_map<int, int> m;
    int max = -1;
    for (auto &x : a) cin >> x;
    for (int i = 0; i < n; ++i) {
        if (m.contains(a[i])) {
            m[a[i]]++;
        }
        else m[a[i]] = 1;
        max = std::max(m[a[i]], max);
    }
    if (max > k) {
        cout << "NO";
    }
    else {
        cout << "YES" << '\n';
        for (int i = 0; i < n; ++i) {
            if (req == 0) {
                for (int j = 1; j <= k; ++j) {
                    if (!valid[a[i]][j]) {
                        cout << j << " ";
                        valid[a[i]][j] = 1;
                        break;
                    }
                }
            }
            else {
                cout << req << " ";
                valid[a[i]][req] = 1;
                req--;
            }
        }
    }
    return 0;
} 