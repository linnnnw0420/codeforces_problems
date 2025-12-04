#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, x;
    cin >> a >> b >> x;
    bool state = a > b; 
    x--;
    string ans;
    int index = 0;
    while (x > 0){
        if (x > 0){
            if (state) {
                ans.push_back('0');
                state = !state;
                a--;
                index++;
            }
            else {
                ans.push_back('1');
                state = !state;
                b--;
                index++;
            }
            if (index > 0) {
                if (ans[index] != ans[index - 1]){
                    x--;
                }
            }
        }
    }
    if (state) {
        for (int i = 0; i < a; i++) {
            ans.push_back('0');
        }
        for (int i = 0; i < b; i++) {
            ans.push_back('1');
        }
    }
    else {
        for (int i = 0; i < b; i++) {
            ans.push_back('1');
        }
        for (int i = 0; i < a; i++) {
            ans.push_back('0');
        }
    }
    cout << ans;
    return 0;
}