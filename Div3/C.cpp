#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main() {
    int n, k;
    std::cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    std::sort(a.begin(), a.end());
    int ans = a[0];
    for (int i = 0; i < k; ++i) {
        ans = a[i];
    }
    if (k == 0) {
        if (ans - 1 == 0) {
            ans = -1;
        }
        else ans--;
    }
    else if (k < n) {
        if (a[k] == ans){
            ans = -1;
        }
    }
    std::cout << ans;
}