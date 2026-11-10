#include <iostream>
using namespace std;
void fastExponential(int x, int n){
    int ans=1;
    while(n>0){
    int lastdigit=n&1;
    if(lastdigit==1){
        ans=ans*x;}
        x=x*x;
    n=n>>1;
    }
    cout<<"Result: "<<ans<<endl;
}

int main(){
    int x, n;
    cout<<"Enter the base number: ";
    cin>>x;
    cout<<"Enter the exponent: ";
    cin>>n;
    fastExponential(x, n);
    return 0;
}