#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int count = 1;
    vector<int> ans;
    for (int i = 1; i < n; i++){
        if (a[i] == 1) {
            ans.push_back(count);
            count = 1;
        }
        else {
            count++;
        }

    }
    if (count >= 1) {
        ans.push_back(count);
    }
    std::cout << ans.size() << '\n';
    for (auto x : ans) cout << x << " ";
    

    return 0;
}