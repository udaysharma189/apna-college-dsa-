#include <iostream>
using namespace std;
int main() {
    int  arr[5] = {54, 23, 76, 12, 89};
    int n = sizeof(arr) / sizeof(int);
    int key = 6;
    int found =0;
    for(int i=0; i<n;i++){
        if(arr[i]==key){
            found =1;
            cout<< "key is found at index no: "<<i<<endl;
            break;
        }
    }
    if(found!=1){
            cout<< "key is not found in this array"<<endl;
        }
    
return 0;
}
// linear search