
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1, '.');

    cout << "Enter second string: ";
    getline(cin, str2, '.');

    int count[26] = {0};

    if (str1.length() != str2.length()) {
        cout << "Not anagram" << endl;
    }
    else {
        for (int i = 0; i < str1.length(); i++) {
            int idx = str1[i] - 'a';
            count[idx]++;
        }

        for (int i = 0; i < str2.length(); i++) {
            int idx = str2[i] - 'a';

            if (count[idx] == 0) {
                cout << "Not anagram" << endl;
                return 0;
            }

            count[idx]--;
        }

        cout << "Anagram" << endl;
    }

    return 0;
}// valid anagram
