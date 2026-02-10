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
    shared_ptr<Demo> p1 = make_shared<Demo>();
    shared_ptr<Demo> p2 = p1;

    cout << "Use count: " << p1.use_count() << endl;

    return 0;
}
