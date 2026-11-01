#include<iostream>
using namespace std;
int main(){
    int arr[5]={54,23,76,12,89};
    int n= sizeof(arr)/sizeof(int);
 int max =0;
 for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
 }
 cout<<max;
 
return 0;
}