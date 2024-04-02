#include <iostream>
using namespace std;

#define INF 10000000 

#define MAX(x, y) ((x) > (y) ? (x) : (y)) 
#define MIN(x, y) ((x) < (y) ? (x) : (y)) 

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = -INF; 
    int min_val = INF;  

    for (int i = 0; i < n; i++) {
        max_val = MAX(max_val, arr[i]); 
        min_val = MIN(min_val, arr[i]); 
    }

    cout << "Result = " << max_val - min_val << endl; 
    return 0;
}
