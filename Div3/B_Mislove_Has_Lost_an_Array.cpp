#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, r;
    std::cin >> n >> l >> r;
    cout << (int)pow(2, l) - 1 + (n - l) << " ";
    cout << (int)pow(2, r) - 1 + (n - r) * (int)pow(2, r - 1);

    return 0;
}