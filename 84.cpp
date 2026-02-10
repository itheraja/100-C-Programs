#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    unique_ptr<Demo> ptr = make_unique<Demo>();
    return 0;
}
