
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int size = sizeof(a) / sizeof(int);

        int largest = a[0];
        int secondLargest = INT_MIN;

        for(int i = 1; i < size; i++) {
            if(a[i] > largest) {
                secondLargest = largest;
                largest = a[i];
            }
            else if(a[i] > secondLargest && a[i] < largest) {
                secondLargest = a[i];
            }
        }

        cout << largest + secondLargest << endl;
    }

    return 0;
}
//sumoflargest and second largest 