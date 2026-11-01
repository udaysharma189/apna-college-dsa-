#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int start =0;
    int end= n-1;
    int key =6;
    int found =0;
    while(start<=end){
       int  mid= (start+end)/2;
        if(arr[mid]==key){
            cout<<"key is found at index"<<mid<<endl;
            found =1;
            break;
        }else if (arr[mid]>key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    } if(found==0){
        cout<< "key is not found in this array "<<endl;
    }
}
// binary search