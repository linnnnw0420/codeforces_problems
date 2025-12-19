#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, v;
    std::cin >> n >> v;
    if(v >= n - 1) {
        std::cout << n - 1;
        return 0;
    }
    int r = n - v - 1;
    int sum = (r + 1) * (r + 2) / 2 - 1;
    std::cout << v + sum;

    return 0;
}