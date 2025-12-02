#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int left = 0, right = n - 1;
    int ans = 0;
    bool t = 1;
    while (left <= right && t) {
        if (a[left] <= k) {
            left++;
            ans++;
        }
        else if (a[right] <= k) {
            right--;
            ans++;
        }
        else {
            t = 0;
        }
    }
    std::cout << ans;


    return 0;
}