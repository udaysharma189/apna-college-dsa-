#include <iostream>
using namespace std;

class Animal {
public:
    string color;

    void eat() {
        cout << "eats.." << endl;
    }

    void breath() {
        cout << "breath" << endl;
    }
};

class Fish : private Animal {
public:
    int fins;

    void swim() {
        cout << "swim" << endl;
    }
};

int main() {
    Fish f1;
    f1.fins = 3;

    f1.eat();
    f1.breath();
    f1.swim();

    return 0;
}