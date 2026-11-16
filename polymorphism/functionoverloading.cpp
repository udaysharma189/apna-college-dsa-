#include <iostream>
#include <string>
using namespace std;
class print{
    public:
    void show(int x){
        cout<< "int:"<< x <<endl;
    }
    void show(string str){
        cout<< "string:"<< str <<endl;
    }
};
int main(){
    print p1;
    p1.show(15);
    p1.show("Uday Sharma");
    return 0;
}
