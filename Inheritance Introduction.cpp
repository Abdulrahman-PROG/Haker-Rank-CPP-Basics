#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

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
    FAST;
    Isosceles isoTriangle;
    isoTriangle.displayIsosceles();
    isoTriangle.displayDescription();
    isoTriangle.displayTriangle();
    return 0;
}
