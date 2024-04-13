#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template<typename T>
struct Traits;

template<>
struct Traits<Color> {
    static string name(int index) {
        switch (static_cast<Color>(index)) {
            case Color::red:
                return "red";
            case Color::green:
                return "green";
            case Color::orange:
                return "orange";
            default:
                return "unknown";
        }
    }
};

template<>
struct Traits<Fruit> {
    static string name(int index) {
        switch (static_cast<Fruit>(index)) {
            case Fruit::apple:
                return "apple";
            case Fruit::orange:
                return "orange";
            case Fruit::pear:
                return "pear";
            default:
                return "unknown";
        }
    }
};

int main() {
    FAST;
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int index1, index2;
        cin >> index1 >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << e;
    }

    return 0;
}
