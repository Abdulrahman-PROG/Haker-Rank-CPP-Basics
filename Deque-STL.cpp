#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void printKMax(int arr[], int n, int k) {
    deque<int> q;

    // Process the first window separately
    for(int i = 0; i < k; i++) {
        while (!q.empty() && arr[i] >= arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }

    // Process the remaining elements
    for(int i = k; i < n; i++) {
        cout << arr[q.front()] << " ";

        // Remove elements outside the current window
        while (!q.empty() && q.front() <= i - k)
            q.pop_front();

        // Remove smaller elements from the back of the deque
        while (!q.empty() && arr[i] >= arr[q.back()])
            q.pop_back();

        q.push_back(i);
    }

    cout << arr[q.front()] << e;
}

int main() {
    FAST;
    int t;
    cin >> t;
    while(t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}


