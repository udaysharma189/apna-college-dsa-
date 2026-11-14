#include <iostream>
#include <string>
using namespace std;

void removeDuplicates(string str, string ans, int i, bool map[26]) {

    // Base Case
    if (i == str.size()) {
        cout << ans << endl;
        return;
    }

    char ch = str[i];
    int mapIdx = ch - 'a';

    if (map[mapIdx] == true) {
        // Duplicate character
        removeDuplicates(str, ans, i + 1, map);
    }
    else {
        // Not duplicate
        map[mapIdx] = true;
        removeDuplicates(str, ans + ch, i + 1, map);
    }
}

int main() {

    string str = "apnacollege";
    string ans = "";

    bool map[26] = {false};

    removeDuplicates(str, ans, 0, map);

    return 0;
}