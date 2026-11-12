#include <iostream>
using namespace std;
int sumofnaturalno(int n){
    if (n==0){
        return 0;
    }
    return n+sumofnaturalno(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sumofnaturalno(n)<<endl;
    return 0;
}