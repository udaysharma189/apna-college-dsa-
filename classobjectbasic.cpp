#include <iostream>
using namespace std;
class Student{
    private:
    string name = "uday sharma";
    int age = 20;
public:
void display();
};
void Student::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
int main(){
    Student s1;
    s1.display();
    return 0;
}