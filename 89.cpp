#include <iostream>
using namespace std;

class Demo {
public:
    int *data;

    Demo(int value) {
        data = new int;
        *data = value;
    }

    // Move constructor
    Demo(Demo &&obj) noexcept {
        data = obj.data;
        obj.data = nullptr;
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = std::move(d1);  // move constructor

    cout << (d1.data == nullptr ? "d1 empty" : "d1 has data") << endl;
    cout << *d2.data << endl;

    return 0;
}
