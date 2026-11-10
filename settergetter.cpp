#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    string name;
    float cgpa;
    public:
    void getpercentage(){
        cout<<(cgpa*10)<<"%"<<endl;
    }
    //setter
    void setname(string n){
        name=n;
    }
    void setcgpa(float c){
        cgpa=c;
    }
    //getter
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }

};
int main(){
    Student s1;
    s1.setname("uday sharma");
    s1.setcgpa(9.5);
    cout<<"Name: "<<s1.getname()<<endl;
    cout<<"CGPA: "<<s1.getcgpa()<<endl;
    cout<<"Percentage: ";
    s1.getpercentage();
    return 0;
}