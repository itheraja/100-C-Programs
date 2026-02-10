#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "Base1 show" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 show" << endl;
    }
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived d;
    // d.show(); // Error: ambiguous
    d.Base1::show(); // works
    d.Base2::show(); // works
    return 0;
}
