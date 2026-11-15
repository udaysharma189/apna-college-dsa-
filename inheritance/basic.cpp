#include <iostream>
using namespace std;
class Animal{
    public:
    string color;
    void eat(){
        cout<<" eats.."<<endl;
    }
    void breath(){
  cout<< "breath "<<endl;
    }
    class Fish : public Animal{
        public:
        int fins;
        void swin(){
            cout<< "swin"<<endl;
        }
    }
};
int main (){
    
}