#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool compare(string a, string b){
    return a.size() < b.size();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> a(n);
    bool valid = 1;
    for (auto &x : a) cin >> x;
    std::sort(a.begin(), a.end(), compare);
    for (int i = 0; i < n - 1; ++i) {
        if (!a[i + 1].contains(a[i])){
            valid = 0;
            break;
        }
    }
    if (valid) {
        cout << "YES" << '\n';
        for (int i = 0; i < n; ++i) {
            cout << a[i] << '\n';
        }
    }
    else cout << "NO";

    return 0;
}