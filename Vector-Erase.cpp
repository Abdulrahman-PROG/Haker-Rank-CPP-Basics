#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main() {
    FAST;
    int size,pos,start,end,n,i,a,j;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }   
    cin>>pos>>start>>end;
    v.erase(v.begin()+(pos-1));
    v.erase(v.begin()+start-1,v.begin()+end-1);
    size=v.size();
    cout<<size<<e;
    for(j=0;j<size;j++)
    {
        cout<<v[j]<<" ";
    }
return 0;
}
