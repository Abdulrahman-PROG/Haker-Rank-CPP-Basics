#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


class Triangle {
public:
    void displayTriangle() {
        cout << "I am a triangle" << e;
    }
};

class Isosceles : public Triangle {
public:
    void displayIsosceles() {
        cout << "I am an isosceles triangle" << e;
    }
};

class Equilateral : public Isosceles {
public:
    void displayEquilateral() {
        cout << "I am an equilateral triangle" << e;
    }
};

int main() {
    FAST;
    Equilateral eqTriangle;
    eqTriangle.displayEquilateral();
    eqTriangle.displayIsosceles();
    eqTriangle.displayTriangle();
    return 0;
}
