#include <iostream>
using namespace std;

class Demo {
public:
    int *data;

    Demo(int value) {
        data = new int;
        *data = value;
    }

    // shallow copy (default)
    // Demo(const Demo &obj) = default;

    // deep copy
    Demo(const Demo &obj) {
        data = new int;
        *data = *obj.data;
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;  // deep copy

    *d2.data = 20;

    cout << *d1.data << endl; // 10 (not affected)
    cout << *d2.data << endl; // 20

    return 0;
}
