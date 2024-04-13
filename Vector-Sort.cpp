#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    FAST;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i < n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
     for(int i =0; i < n;i++){
       cout<<v[i]<<" ";
    }
    return 0;
}
