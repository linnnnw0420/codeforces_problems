#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    vector<int> a(n);
    vector<bool> bol(n, 0);
    vector<int> b(n);
    vector<int> index;
    int sum = 0;
    for (auto &x : a) cin >> x;
    copy(a.begin(), a.end(), b.begin());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= n - k; j--) {
            if (a[i] == b[j] && !bol[j]) {
                index.push_back(i);
                sum += a[i];
                bol[j] = 1;
                break;
            }
        }
        if (index.size() == k) break;
    }
    std::cout << sum << '\n';
    if (index.size() == 1) {
        cout << n;
        return 0;
    }
    cout << index[0] + 1 << " ";
    for (int i = 1; i < index.size() - 1; ++i) {
        cout << index[i] - index[i - 1] << " ";
    }
    cout << a.size() - 1 - index[index.size() - 2];


    return 0;
}