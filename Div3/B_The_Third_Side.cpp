#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    int a;
    std::cin >> n;
    std::priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; ++i) {
        std::cin >> a;
        pq.push(a); 
    }

    while (pq.size() != 1) {
        int a1 = pq.top();
        pq.pop();
        int a2 = pq.top();
        pq.pop();
        pq.push(a1 + a2 - 1);
    }
    std::cout << pq.top() << '\n';
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