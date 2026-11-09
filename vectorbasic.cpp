#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> uday(10,-1);
    cout<<uday.size()<<endl;
    for(int i=0; i<uday.size(); i++){
        cout<<uday[i]<<endl;
    }
}