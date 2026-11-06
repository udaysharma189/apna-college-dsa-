#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    int n= strlen(str);
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout<<"Reversed string: "<<str<<endl;
}// reverse char array