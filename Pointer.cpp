#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main() {
    FAST;
    int a,b;
    cin>>a>>b;
    int m = a-b;
    if (m < 0 ){
        m*=-1;
    }
    cout<< a+b <<e << m;
    return 0;
}
