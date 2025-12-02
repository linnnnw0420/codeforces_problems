#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string r;
    cin >> r;
    unordered_map<string, int> counts;
    string best;
    int best_count = 0;
    for (int i = 0; i + 1 < n; ++i) {
        string temp;
        temp.push_back(r[i]);
        temp.push_back(r[i + 1]);
        int current = ++counts[temp];
        if (current > best_count) {
            best_count = current;
            best = temp;
        }
    }
    cout << best;
    return 0;
}
