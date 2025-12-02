#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    std::cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            count++;
        }
        else {
            if (count >= 3){
                ans += count - 2;
            }
            count = 0;
        }
    }
    if (count >= 3){

    ans += count - 2;}
    std::cout << ans;
    
    return 0;
}