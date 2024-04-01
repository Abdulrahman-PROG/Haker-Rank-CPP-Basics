#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
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
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}

