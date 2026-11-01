// #include<iostream>
// using namespace std;
// void bintodec(int num){
//     int n = num;
//     int sum =0;
//     int pow = 1;
//     int lastdigit;
//     while(n>0){
//         lastdigit = n%10;
//         sum += lastdigit * pow;
//         pow *= 2;
//         n /= 10;
//     }
//     cout<< sum << endl;
// }
// int main(){
//     bintodec(101);
// }
#include <iostream>
using namespace std;
void bintodec(int num){
    int n = num;
    int sum = 0;
    int pow = 1;
    while(n>0){
        int lastdigit = n%10;
        sum= lastdigit * pow + sum;
        pow *= 2;
        n=n/10;
    }
    cout << sum << endl;
}
int main(){
    bintodec(1010);
}