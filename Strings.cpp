#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main() {
    FAST;
    string a,b;
    cin>>a>>b;
    string s = a+b;
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    cout<<a.size() <<" "<< b.size()<<e;
    cout<<s<<e;
    cout<<a<<" "<<b;

    return 0;
}
