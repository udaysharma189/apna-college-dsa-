#include<iostream>
using namespace std;
void lowercase(char str[],int n) {
    if(int i=0;i<n;i++){
        if(str[i]<='a'&&str[i]>='z'){
            continue; // Already lowercase, do nothing
        } else{
            str[i] = str[i] - 'A' + 'a'; // Convert to lowercase
        }
    }
    int main(){
        int n;
        cout<<"Enter the size of the string: ";
        cin>>n;
        char str[n];
        cout<<"Enter the string: ";
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        lowercase(str,n);
    }