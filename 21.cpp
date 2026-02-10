#include <iostream>
using namespace std;

class Test {
public:
    int x;

    Test(int a) {
        x = a;
    }

    void show() {
        cout << "Value = " << x;
    }
};

int main() {
    Test *obj = new Test(50);   // dynamic object
    obj->show();

    delete obj;   // free memory
    return 0;
}
