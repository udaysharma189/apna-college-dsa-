#include <iostream>
#include <cstring>
using namespace std;

void lowercase(char str[], int n) {
    for (int i = 0; i < n; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}

int main() {
    char str[100];

    cout << "Enter the string: ";
    cin.getline(str, 100);

    int n = strlen(str);

    lowercase(str, n);

    cout << "Lowercase string: " << str << endl;

    return 0;
}// smallcase 