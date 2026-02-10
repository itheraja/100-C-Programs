#include <iostream>
using namespace std;

class Test {
public:
    inline int cube(int x) {
        return x * x * x;
    }
};

int main() {
    Test t;
    cout << "Cube = " << t.cube(3);

    return 0;
}
