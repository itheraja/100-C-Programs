#include <iostream>
using namespace std;

class Base {
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Derived : public Base {
public:
    void display() {
        cout << "a = " << a << endl;  // accessible
        cout << "b = " << b << endl;  // accessible
        // cout << "c = " << c << endl; // NOT accessible
    }
};

int main() {
    Derived d;
    d.display();
    return 0;
}
