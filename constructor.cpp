#include <iostream>
using namespace std;
class Car{
    string name;
    string color;
    public:
    Car(string n,string c){
        cout << "Car constructor is called"<<endl;
        name=n;
        color=c;
    }
    void start(){
        cout<<name<<" is starting"<<endl;
    }
    void stop(){
        cout<<name<<" is stopping"<<endl;
    }
     string getname(){
        return name;
    }
    string getcolor(){
        return color;
    }
};
int main(){
    Car c1("BMW","Black");
    cout<<"Car name: "<<c1.getname()<<endl;
    cout<<"Car color: "<<c1.getcolor()<<endl;
    return 0;
}