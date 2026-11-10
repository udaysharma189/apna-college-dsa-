#include <iostream>
using namespace std;
void countSetBit(int n){
    int count=0;
    while(n>0){
        int lastdigit= n&1;
        count+=lastdigit;
        n=n>>1;
    }
    cout<<"The number of set bits in the given number is: "<<count<<endl;

}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    countSetBit(n);
    return 0;
}