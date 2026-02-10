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

    void show() {
        cout << "Value = " << *data << endl;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;    // copy constructor
    Demo d3(20);
    d3 = d1;         // copy assignment

    d1.show();
    d2.show();
    d3.show();

    return 0;
}
