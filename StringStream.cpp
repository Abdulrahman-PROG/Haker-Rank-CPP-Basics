#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int> parseInts(string str) {
    vector<int> integers;
    stringstream ss(str);
    char ch;
    int num;
    while (ss >> num >> ch) {
        integers.push_back(num);
    }
    ss >> num;
    integers.push_back(num);
    return integers;
}

int main() {
    FAST;
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int num : integers) {
        cout << num << e;
    }
    return 0;
}
