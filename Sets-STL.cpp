#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    FAST;
    set<int> s;
    int q;
    cin >> q;
    while(q--) {
        int a, b;
        cin >> a >> b;
        if(a == 1) {
            s.insert(b);
        } else if(a == 2) {
            s.erase(b);
        } else {
            auto itr = s.find(b);
            if(itr != s.end()) {
                cout << "Yes" << e;
            } else {
                cout << "No" << e;
            }
        }
    }
    return 0;
}

