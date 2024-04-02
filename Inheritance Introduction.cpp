
#include <iostream>
using namespace std;

class Triangle
{
public:
    void displayTriangle()
    {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle
{
public:
    void displayIsosceles()
    {
        cout << "I am an isosceles triangle\n";
    }

    void displayDescription()
    {
        cout << "In an isosceles triangle two sides are equal\n";
    }
};

int main() {
    Isosceles isoTriangle;
    isoTriangle.displayIsosceles();
    isoTriangle.displayDescription();
    isoTriangle.displayTriangle();
    return 0;
}
