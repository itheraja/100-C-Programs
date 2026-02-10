#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int sub(int a, int b) {
        return a - b;
    }
};

int main() {
    Calculator c;
    cout << "Addition = " << c.add(5, 3) << endl;
    cout << "Subtraction = " << c.sub(5, 3);

    return 0;
}
