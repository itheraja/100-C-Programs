#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base show" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show" << endl;
    }
};

int main() {
    Derived d;
    d.show();  // Derived show
    return 0;
}
