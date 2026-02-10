#include <iostream>
using namespace std;

class Demo {
private:
    int *data;

public:
    Demo(int value) {
        data = new int;
        *data = value;
    }

    // Destructor
    ~Demo() {
        delete data;
    }

    // Copy Constructor
    Demo(const Demo &obj) {
        data = new int;
        *data = *obj.data;
    }

    // Copy Assignment
    Demo& operator=(const Demo &obj) {
        if (this != &obj) {
            delete data;
            data = new int;
            *data = *obj.data;
        }
        return *this;
    }

    // Move Constructor
    Demo(Demo &&obj) noexcept {
        data = obj.data;
        obj.data = nullptr;
    }

    // Move Assignment
    Demo& operator=(Demo &&obj) noexcept {
        if (this != &obj) {
            delete data;
            data = obj.data;
            obj.data = nullptr;
        }
        return *this;
    }

    void show() {
        if (data)
            cout << "Value = " << *data << endl;
        else
            cout << "No data" << endl;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = std::move(d1);  // move constructor

    d2.show();
    d1.show();  // d1 is empty now

    return 0;
}
