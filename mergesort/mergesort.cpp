
#include <iostream>
#include <vector>
using namespace std;

// Merge function
void merge(int arr[], int st, int ed, int mid) {
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    // Compare left and right parts
    while (i <= mid && j <= ed) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining left elements
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining right elements
    while (j <= ed) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy vector elements into original array
    int x = 0;
    for (int ind = st; ind <= ed; ind++) {
        arr[ind] = temp[x];
        x++;
    }
}

// Merge Sort function
void mergesort(int arr[], int st, int ed) {

    if (st >= ed) {
        return;
    }

    int mid = st + (ed - st) / 2;

    // Divide
    mergesort(arr, st, mid);
    mergesort(arr, mid + 1, ed);

    // Conquer (Merge)
    merge(arr, st, ed, mid);
}

int main() {

    int arr[6] = {2, 5, 5, 7, 1, 6};

    int n = sizeof(arr) / sizeof(int);

    mergesort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
