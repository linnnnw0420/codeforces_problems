#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, totalodd = 0, totaleven = 0, odds = 0, evens = 0;
    int cnt = 0;
    std::cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (i % 2 == 0) totalodd+=a[i];
        else totaleven += a[i];
    } 
    //std::cout << totalodd << " " << totaleven << '\n';
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            int es = totalodd - a[i] + evens - odds;
            int os = totaleven + odds - evens;
            if (es == os) ++cnt;
            odds += a[i]; 
            //std::cout << es << " " << os << '\n';
        }
        else {
            int es = totalodd + evens - odds;
            int os = totaleven - a[i] + odds - evens;
            if (es == os) ++cnt;
            evens += a[i];
        }
    }
    std::cout << cnt;

    return 0;
}