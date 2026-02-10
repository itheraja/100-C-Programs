#include <iostream>
using namespace std;

class Math {
public:
    static int square(int x) {
        return x * x;
    }
};

int main() {
    cout << "Square = " << Math::square(5);
    return 0;
}
