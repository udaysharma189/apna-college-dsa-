#include<iostream>
using namespace std;
int main(){
    int arr[10]={54,23,76,12,89,34,67,45,90,11};
    int n = sizeof(arr)/sizeof(int);
    int min = arr[0];
    for(int i=0; i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum element "<<min<<endl;
    return 0;
}