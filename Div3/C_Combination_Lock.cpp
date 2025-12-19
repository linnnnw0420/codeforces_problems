#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    std::cin >> n;
    int curr = 2;
    int pos = 1;
    std::vector<int> a(n);
    if (n % 2 == 0) {
        cout << "-1\n";
        return;
    }
    a[0] = 1;
    for(int i = n - 2; i >= 1; i-=2) {
        int index = (pos - i + 5) % n; 
        a[index] = curr;
        ++curr;
        pos++;
    }
    for(int i = n - 1; i >= 2; i-=2) {
        int index = (pos - i + 5) % n;
        a[index] = curr;
        ++curr, ++pos;
    }
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}