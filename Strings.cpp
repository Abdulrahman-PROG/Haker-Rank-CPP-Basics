#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a,b;
    cin>>a>>b;
    string s = a+b;
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    cout<<a.size() <<" "<< b.size()<<endl;
    cout<<s<<endl;
    cout<<a<<" "<<b;

    return 0;
}
