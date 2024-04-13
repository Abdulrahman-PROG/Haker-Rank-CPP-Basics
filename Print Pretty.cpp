#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
  FAST;
  int T; cin >> T;
  cout << setiosflags(ios::uppercase);
  cout << setw(0xf) << internal;
  while(T--) {
    double A; cin >> A;
    double B; cin >> B;
    double C; cin >> C;

           cout << hex << left << showbase << nouppercase; 
        cout << (long long) A << endl; 
    
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); 
        cout << B << endl; 

        cout << scientific << uppercase << noshowpos << setprecision(9); 
        cout << C << endl; 

  }
  return 0;

}
