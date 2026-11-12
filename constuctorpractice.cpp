#include <iostream>
using namespace std;
class User{
    private:
    int id;
    int password;
    public:
    string username;
    User(int i){
        cout << "User constructor is called"<<endl;
        id=i;
    }
    int setid(int i){
        id=i;
    }
    int getid(){
        return id;
    }
};
int main(){
    User u(9548);
    cout<<"User ID: "<<u.getid()<<endl;

}