#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

class Student {
private:
    int age;
    string fname;
    string lname;
    int c;
public:
    void setage(int a){
        age = a;
    }
    void setfname(string f){
        fname = f;
    }
    void setlname(string l){
        lname = l;
    }
    void setc(int c_val){
        c = c_val;
    }
    int getage(){
        return age;
    }
    string getfname(){
        return fname;
    }
    string getlname(){
        return lname;
    }
    int getc(){
        return c;
    }
    
};
int main() {
    FAST;
    Student s1;
    int age,c;
    string fname,lname;
    cin>>age>>fname>>lname>>c;
    s1.setage(age);
    s1.setfname(fname);
    s1.setlname(lname);
    s1.setc(c);
    cout<<s1.getage()<<e;
    cout<<s1.getlname()<<", "<<s1.getfname()<<e;
    cout<<s1.getc()<<e<<e;
    cout<<s1.getage()<<","<<s1.getfname()<<","<<s1.getlname()<<","<<s1.getc();

    return 0;
}
