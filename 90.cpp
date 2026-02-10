#include <iostream>
using namespace std;

class Demo {
public:
    int *data;

    Demo(int value) {
        data = new int;
        *data = value;
    }

    // Move assignment
    Demo& operator=(Demo &&obj) noexcept {
        if (this != &obj) {
            delete data;
            data = obj.data;
            obj.data = nullptr;
        }
        return *this;
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo d1(10);
    Demo d2(20);

    d2 = std::move(d1);  // move assignment

    cout << (d1.data == nullptr ? "d1 empty" : "d1 has data") << endl;
    cout << *d2.data << endl;

    return 0;
}
