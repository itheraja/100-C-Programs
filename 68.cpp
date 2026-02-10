#include <iostream>
using namespace std;

class Demo {
public:
    void show() {
        throw "Error in Demo";
    }
};

int main() {
    Demo d;
    try {
        d.show();
    }
    catch (const char* msg) {
        cout << msg;
    }
    return 0;
}
