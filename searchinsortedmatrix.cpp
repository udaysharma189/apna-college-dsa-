#include <iostream>
using namespace std;

void searchInSortedMatrix(int arr[][4], int n, int m, int target) {
    int row = 0;
    int col = m - 1;

    while (row < n && col >= 0) {
        if (arr[row][col] == target) {
            cout << "Element found";
            return;
        }
        else if (arr[row][col] > target) {
            col--;
        }
        else {
            row++;
        }
    }

    cout << "Element not found";
}

int main() {
    int arr[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    searchInSortedMatrix(arr, 4, 4, 29);

    return 0;
}

// Time Complexity: O(n + m)
// Space Complexity: O(1)
// search sort