#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    FAST;
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; ++i) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    cout << "one" << e;
                    break;
                case 2:
                    cout << "two" << e;
                    break;
                case 3:
                    cout << "three" << e;
                    break;
                case 4:
                    cout << "four" << e;
                    break;
                case 5:
                    cout << "five" << e;
                    break;
                case 6:
                    cout << "six" << e;
                    break;
                case 7:
                    cout << "seven" << e;
                    break;
                case 8:
                    cout << "eight" << e;
                    break;
                case 9:
                    cout << "nine" << e;
                    break;
            }
        } else if (i % 2 == 0) {
            cout << "even" << e;
        } else {
            cout << "odd" << e;
        }
    }

    return 0;
}
