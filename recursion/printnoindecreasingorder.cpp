#include <iostream>
using namespace std;
int decreasing(int n){
    if (n==0){
        return 0;
    }
    cout<<n<<" ";
    return decreasing(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Decreasing order of "<<n<<" is: ";
    decreasing(n);
    return 0;
}