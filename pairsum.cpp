#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> pairs, int target) {
    int start = 0;
    int end = pairs.size() - 1;

    while (start < end) {
        if (pairs[start] + pairs[end] == target) {
            return {start, end};
        }
        else if (pairs[start] + pairs[end] < target) {
            start++;
        }
        else {
            end--;
        }
    }
    return {};
}

int main() {
    vector<int> pairs = {1,2,3,4,5,6,7,8,9};
    int target = 10;

    cout << pairSum(pairs, target)[0] << " "
         << pairSum(pairs, target)[1] << endl;

    return 0;
}