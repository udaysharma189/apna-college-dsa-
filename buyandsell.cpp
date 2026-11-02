#include <iostream>
#include <climits>
using namespace std;
int main() {
    int  price[5] = {54, 23, 76, 12, 89};
    int n = sizeof(price) / sizeof(int);
    int bestbuy[10000];
    bestbuy[0] =INT_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i]= min(bestbuy[i-1],price[i-1]);
    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int currentprofit= price[i]-bestbuy[i];
        maxprofit= max(maxprofit,currentprofit);
    }
    cout<< "max profit is: "<<maxprofit<<endl;
    return 0;
}// buy and sell stock problem