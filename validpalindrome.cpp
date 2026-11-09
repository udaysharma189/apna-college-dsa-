#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    int n= strlen(str);
    int start = 0;
    int end = n-1;
    while(start<end){
        if(str[start]!=str[end]){
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        start++;
        end--;
    }
    cout<<"Palindrome"<<endl;
}// valid palindrome 