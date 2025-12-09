#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    std::vector<int> a(n + 1), b(n);
    for (auto &x : b) cin >> x;
    for (int i = 1; i < n - 1; ++i) {
        if (!b[i] && b[i - 1] && b[i + 1]) {
            
        }
    }

    return 0;
}