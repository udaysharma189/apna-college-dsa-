#include <iostream>
using namespace std;
void getIthBit(int n, int i){
    int mask=1<<i;
    if((n&mask)==0)
        cout<<"The "<<i<<"th bit is 0"<<endl;
    else
        cout<<"The "<<i<<"th bit is 1"<<endl;
}
int main(){
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the position of the bit to check: ";
    cin>>i;
    getIthBit(n, i);
    return 0;
}