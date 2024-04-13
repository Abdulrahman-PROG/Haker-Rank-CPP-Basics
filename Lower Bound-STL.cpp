#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    FAST;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        auto it = lower_bound(arr.begin(), arr.end(), x);
        if(*it == x) {
            cout << "Yes " << (it - arr.begin() + 1) << e;
        } else {
            cout << "No " << (it - arr.begin() + 1) << e;
        }
    }
    return 0;
}
