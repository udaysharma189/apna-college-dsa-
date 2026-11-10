#include <iostream>
using namespace std;

void updateIthBit(int n, int i, int v) {
    int mask = ~(1 << i);
    int result = (n & mask) | (v << i);

    cout << "Updated number: " << result << endl;
}

int main() {
    int n, i, v;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter the position of the bit to update: ";
    cin >> i;

    cout << "Enter the value to update (0 or 1): ";
    cin >> v;

    updateIthBit(n, i, v);

    return 0;
}
