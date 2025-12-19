#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

    string t;
    std::cin >> t;
    int index = -1;
    int count = 0;
    for(int i = t.size() - 1; i >= 0; --i){
        if (t[i] != '0') {
            index = i;
            break;
        }
        ++count;
    }
    for (int i = 0; i < index; ++i) {
        if (t[i] != '0') ++count;
    }

    std::cout << count << '\n';

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