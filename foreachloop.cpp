#include <iostream>
#include <string>
using namespace std;
int main(){
    string str= "Uday sharma";
    // for(int i=0; i<str.length(); i++){
    //     cout<<str[i]<<endl;
    // } ya hai for loop sa 
    for(char c: str){
        cout<<c<<endl;
    }
}