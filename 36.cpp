#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent constructor called" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child constructor called" << endl;
    }
};

int main() {
    Child c;
    return 0;
}
