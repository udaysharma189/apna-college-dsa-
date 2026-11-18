
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() {
        cout << "Draw Circle" << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    void draw() {
        cout << "Draw Square" << endl;
    }
};

int main() {
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();
    // shape s2;
    // s2.draw is not possible because this is a abstructed class 
    return 0;
}
