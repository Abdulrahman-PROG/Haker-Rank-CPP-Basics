#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    FAST;
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arrays;

    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        vector<int> arr(k);
        for (int j = 0; j < k; ++j) {
            cin >> arr[j];
        }
        arrays.push_back(arr);
    }
    for (int i = 0; i < q; ++i) {     
        int x, y;
        cin >> x >> y;
        cout << arrays[x][y] << e;
    }

    return 0;
}
