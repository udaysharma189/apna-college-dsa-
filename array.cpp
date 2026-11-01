#include<iostream>
using namespace std;
int main(){
    // string uday[5]={"umang","subhash","madhu","uday","shubham"};
    // int len = sizeof(uday)/sizeof(string);
    // for(int i=0;i<len-1;i++){
    //     cout<<uday[i]<<endl;
    // }
    int arr[5];
    int len = sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++){
        cin>>arr[i];}
        for(int i=0;i<len;i++){
        cout<<arr[i]<<endl;}
    return 0;
}