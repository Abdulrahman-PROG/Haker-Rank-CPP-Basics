#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    FAST;
    unsigned ll n, s, p, q, r = 0, ans = 0, returned, v;
    n = 100000000;
    s = 1232077670;
    p = 126810854;
    q = 1536183938;
    n = 100000000;
    s = 569099406;
    p = 1607140150;
    q = 823906344;
    cin >> n >> s >> p >> q;

    unsigned ll i, a0 = s, a = s, ap = 0, k = 0, kt = 0;

    v = (1ULL << 31); // 2^31
    for (i = 0; i < n; i++) {
        a = (a * p + q) % v;
        if ((a == a0 || a == ap) && i != 0) {
            k = i + 1;
            break;
        }
        ap = a;
    }
    if (i == n)
        k = i;

    cout << k << e;

    return 0;
}
