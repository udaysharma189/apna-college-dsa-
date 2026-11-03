#include <iostream>
#include <climits>
using namespace std;

int main() {
    int height[5] = {3, 1, 9, 7, 5};
    int n = sizeof(height) / sizeof(int);

    int leftmax[10000];
    leftmax[0] = height[0];

    for(int i = 1; i < n; i++) {
        leftmax[i] = max(leftmax[i-1], height[i]);
    }

    int rightmax[10000];
    rightmax[n-1] = height[n-1];

    for(int i = n-2; i >= 0; i--) {
        rightmax[i] = max(rightmax[i+1], height[i]);
    }

    int trappedwater = 0;

    for(int i = 0; i < n; i++) {
        int water = min(leftmax[i], rightmax[i]) - height[i];

        if(water > 0) {
            trappedwater += water;
        }
    }

    cout << "trapped water is: " << trappedwater << endl;

    return 0;
}// trapping water problem