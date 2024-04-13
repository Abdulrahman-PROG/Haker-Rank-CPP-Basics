#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    FAST;
    map<string,int> m;
    int n;
    cin>>n;
    while(n--){
        int q;
        cin>>q;
        string x;
        int c;
        if(q==1){
            cin>>x;
            cin>>c;
            m[x] += c;
        }
        else if(q==2){
            cin>>x;
            m[x] = 0;
        }
        else{
            cin>>x;
            cout<<m[x]<<e;
        }
    }
    return 0;
}
