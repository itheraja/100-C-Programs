#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo(int a) {
        x = a;
    }

    void show() const {   // const member function
        cout << "Value = " << x;
    }
};

int main() {
    const Demo d(10);
    d.show();

    return 0;
}
