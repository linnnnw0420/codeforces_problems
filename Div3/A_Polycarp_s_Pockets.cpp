#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), cnt(101);
    for (auto &x : a) cin >> x;
    for (int i = 0; i < n; ++i) {
        cnt[a[i]]++;
    }
    auto ans = max_element(cnt.begin(), cnt.end());
    std::cout << *ans;
    return 0;
}