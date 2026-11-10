#include <iostream>
using namespace std;
void clearIthBit(int n, int i){
    int mask=~(1<<i);
    int result=n&mask;
    if(result==0)
        cout<<"The "<<i<<"th bit is cleared to 0"<<endl;
    else
        cout<<"The "<<i<<"th bit is already cleared to 0"<<endl;
}
int main(){
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the position of the bit to clear: ";
    cin>>i;
    clearIthBit(n, i);
    return 0;
}