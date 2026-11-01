
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int arr[7] = {1, 5, -3, -1, 2, 4, -5};
//     int n = sizeof(arr) / sizeof(int);

//     int largestSum = INT_MIN;

//     for(int start = 0; start < n; start++) {
//         for(int end = start; end < n; end++) {

//             int currentSum = 0;

//             for(int i = start; i <= end; i++) {
//                 currentSum += arr[i];
//             }

//             largestSum = max(largestSum, currentSum);

//             cout << currentSum << " ";
//         }
//         cout << endl;
//     }

//     cout << "Largest subarray sum: " << largestSum << endl;

//     return 0;
// }
//**************kadane algorithm******* */
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[7] = {1, 5, -3, -1, 2, 4, -5};
    int n = sizeof(arr) / sizeof(int);

    int largestSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < n; i++) {
        currentSum += arr[i];
        largestSum = max(largestSum, currentSum);

        if(currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Largest subarray sum: " << largestSum << endl;

    return 0;
}
