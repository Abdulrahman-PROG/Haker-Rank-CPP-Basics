#include <cmath>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
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
            cout<<m[x]<<endl;
        }
    }
    return 0;
}
