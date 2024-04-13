#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;
#define endl "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int largest_proper_divisor(int n) {
    if (n == 0) {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for (int i = n / 2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1; 
}
void sol(int n) {
    try {
        int result = largest_proper_divisor(n);
        cout << "result=" << result << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    cout << "returning control flow to caller" << endl;
}

int main() {
    FAST;
    int n;
    cin >> n;
    sol(n);
    return 0;
}

