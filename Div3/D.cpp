#include<bits/stdc++.h>
using namespace std;
#define ll long long

class node {
    public :
    node(ll v = 0) : value(v) {};
    ll value;
    node *head = nullptr, *tail = nullptr;
};
node* dfs(node *start){
    if (start->head == nullptr) return start;
    return dfs(start->head);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    ll x;
    vector<node> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a[i].value = x;
    } 

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            if (a[i].value % 2 == 0){
                if(a[j].value == a[i].value / 2) {
                    a[i].head = &a[j];
                    break;
                }
            }
            if (a[j].value == a[i].value * 3) {
                a[i].head = &a[j];
                break;
            }
        }
        for (int j = 0; j < n; ++j) {
            if (i == j)continue;
            if(a[j].value == a[i].value * 2) {
                a[i].tail = &a[j];
                break;
            }
            if (a[i].value % 3 == 0){
                if (a[i].value / 3 == a[j].value) {
                    a[i].tail = &a[j];
                    break;
                }
            }
        }
    }
    node* start = dfs(&a[0]);
    while (start != nullptr) {
        std::cout << start->value << " ";
        start = start->tail;
    }

    return 0;
}