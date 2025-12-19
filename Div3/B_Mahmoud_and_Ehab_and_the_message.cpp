#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, m;
    std::cin >> n >> k >> m;
    string s;
    vector<ll> price(n), minprice(k, LLONG_MAX);
    vector<string> a(n);
    unordered_map<string, ll> words;
    unordered_map<ll, ll> group;
    for (ll i = 1; i <= n; ++i) {
        std::cin >> a[i - 1];
        words[a[i - 1]] = i;
    }
    for(ll i = 0; i < n; ++i) {
        std::cin >> price[i];
    }
    for (ll i = 0; i < k; ++i) {
        ll x;
        std::cin >> x;
        for (ll j = 0; j < x; ++j) {
            ll g;
            std::cin >> g;
            group[g] = i;
            minprice[i] = std::min(minprice[i], price[g - 1]);
        }
    }
    ll sum = 0;
    for (ll i = 0; i < m; ++i) {
        string tmp;
        std::cin >> tmp;
        sum += minprice[group[words[tmp]]];
    }
    std::cout << sum;

    return 0;
}