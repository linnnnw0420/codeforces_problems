#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    unordered_set<int> s;
    vector<int> ans;
    for (int i = n - 1; i >= 0; --i){
        if (s.contains(a[i]))continue;
        else {
            ans.push_back(a[i]);
            s.insert(a[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for (auto x : ans) cout << x << " ";
    return 0;
}