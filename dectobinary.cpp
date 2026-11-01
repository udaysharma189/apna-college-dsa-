#include <iostream>
using namespace std;
void dectobin(int num){
    int n = num;
   long long int sum =0;
    long long int pow=1;
    while(n!=0){
        int rem=n%2;
        sum = rem*pow+sum;
        pow=pow*10;
         n=n/2;
    }
    cout<< sum<<endl;
}
int main(){
    dectobin(1500);
}