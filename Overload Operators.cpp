#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


class Complex {
public:
    int a, b;

    Complex(int real = 0, int imag = 0) : a(real), b(imag) {}

    Complex operator+(const Complex& other) {
        Complex temp;
        temp.a = a + other.a;
        temp.b = b + other.b;
        return temp;
    }
};

ostream& operator<<(ostream& os, const Complex& complex) {
    os << complex.a << "+i" << complex.b;
    return os;
}

istream& operator>>(istream& is, Complex& complex) {
    char sign;
    is >> complex.a >> sign >> sign >> complex.b;
    return is;
}

int main() {
    FAST;
    Complex c1, c2, result;
    cin >> c1 >> c2;
    result = c1 + c2;
    cout << result << e;
    return 0;
}
