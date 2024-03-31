#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

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
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int num : integers) {
        cout << num << endl;
    }
    return 0;
}
