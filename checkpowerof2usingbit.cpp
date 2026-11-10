#include <iostream>
using namespace std;
void checkpowerof2(int n){
    int c = n & (n-1);
    if(c==0)
        cout<<n<<" is a power of 2"<<endl;
    else
        cout<<n<<" is not a power of 2"<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    checkpowerof2(n);
    return 0;
}