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

};
int main(){
    Car c1("BMW","Black");
    Car c2(c1); // copy constructor is called
    cout<<"Car name: "<<c2.name<<endl;
    cout<<"Car color: "<<c2.color<<endl;
    return 0;
}