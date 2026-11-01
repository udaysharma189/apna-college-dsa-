#include <iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}
// print subarray
// time complexity is O(n^3) and space complexity is O(1)