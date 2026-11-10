#include <iostream>
using namespace std;
void setIthBit(int n, int i){
    int mask=1<<i;
    int result=n|mask;
    if(result==0)
        cout<<"The "<<i<<"th bit is set to 1"<<endl;
    else
        cout<<"The "<<i<<"th bit is already to 1"<<endl;
}
int main(){
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the position of the bit to set: ";
    cin>>i;
    setIthBit(n, i);
    return 0;
}