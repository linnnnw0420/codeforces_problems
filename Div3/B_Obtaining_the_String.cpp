#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    std::cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> move;
    for (int i = 0; i < n; i++) {
        bool find = 0;
        int index = 0;
        if (s[i] == t[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (s[j] == t[i]) {
                find = 1;
                index = j;
                break;
            }
        }
        if (!find) {
            cout << -1;
            return 0;
        }
        for (int j = index; j > i; j--) {
            move.push_back(j);
            swap(s[j], s[j - 1]);   
        }
    }
    cout << move.size() << '\n';
    for (int x : move) cout << x << " ";
    return 0;
}