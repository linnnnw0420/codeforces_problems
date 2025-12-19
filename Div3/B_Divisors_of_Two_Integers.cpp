#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    std::cin >> n;
    ll x = -1, y = -1;
    vector<ll> a(n);
    unordered_map<int, int> m;
    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        ++m[a[i]];
    }
    std::sort(a.begin(), a.end(), std::greater<ll>());
    x = a[0];
    for (int i = 1; i < n; ++i) {
        if (x % a[i] == 0 && m[a[i]] > 1) {
            y = a[i];
            break;
        } 
        else if (x % a[i] != 0) {
            y = a[i];
            break;
        }
    }
    std::cout << x << " " << y;

    return 0;
}