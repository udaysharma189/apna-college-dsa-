#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int copyarr[n];
    for(int i=n-1;i>=0;i--){
        copyarr[n-i-1]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<< copyarr[i]<<endl;
    }

}
// int count =0;
// for(int i=0;i<=100;i++){
//     cout<<"uday sharma"<<endl;
//     count++;
//     cout<< count<<endl;
// }
// }