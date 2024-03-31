#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    int m = a-b;
    if (m < 0 ){
        m*=-1;
    }
    cout<< a+b <<endl << m;
    return 0;
}
