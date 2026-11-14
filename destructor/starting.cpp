#include <iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    Car(string n,string c){
        cout << "Car constructor is called"<<endl;
        name=n;
        color=c;
    }       
   ~Car(){
        cout << "Car destructor is called"<<endl;
    }
};
int main(){
    Car c1("BMW","Black");
    cout<<"Car name: "<<c1.name<<endl;
    cout<<"Car color: "<<c1.color<<endl;
    return 0;
}
