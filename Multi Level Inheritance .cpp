#include <iostream>
using namespace std;

class Triangle {
public:
    void displayTriangle() {
        cout << "I am a triangle" << endl;
    }
};

class Isosceles : public Triangle {
public:
    void displayIsosceles() {
        cout << "I am an isosceles triangle" << endl;
    }
};

class Equilateral : public Isosceles {
public:
    void displayEquilateral() {
        cout << "I am an equilateral triangle" << endl;
    }
};

int main() {
    Equilateral eqTriangle;
    eqTriangle.displayEquilateral();
    eqTriangle.displayIsosceles();
    eqTriangle.displayTriangle();
    return 0;
}
