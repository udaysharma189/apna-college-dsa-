
#include <iostream>
using namespace std;

class A {
private:
    string secret = "secret data";

    friend class B;
};

class B {
public:
    void display(A &obj) {
        cout << obj.secret << endl;
    }
};

int main() {
    A a1;
    B b1;

    b1.display(a1);

    return 0;
}
// ya class ka hai simipal function ka bhi hai 