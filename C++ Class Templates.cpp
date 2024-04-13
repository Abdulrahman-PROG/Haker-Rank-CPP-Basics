#include <bits/stdc++.h>
#include <cassert>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

template <class T>
class AddElements{
    T x;
    public:
        AddElements(T a){x=a;}
        T add(T b){return x+b;}
};

template<>
class AddElements<string>{
    string x;
    public:
        AddElements(string a){x=a;}
        string concatenate(string b){return x+b;}
};

int main () {
 FAST;
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << e;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << e;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << e;
    }
  }
  return 0;
}
