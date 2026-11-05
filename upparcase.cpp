#include <iostream>
using namespace std;
void uppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
             continue; // Already uppercase, do nothing
        } else{
            str[i] = str[i] - 'a' + 'A'; // Convert to uppercase
        }
    }
}int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    uppercase(str);
    cout << "Uppercase string: " << str << endl;
    return 0;
}