#include <iostream>
using namespace std;

class Base {
protected:
    int x = 10;
};

class Derived : public Base {
public:
    void display() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Derived d;
    d.display();
    return 0;
}
