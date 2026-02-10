#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int, int);
    int sub(int, int);
};

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::sub(int a, int b) {
    return a - b;
}

int main() {
    Calculator c;
    cout << "Addition = " << c.add(10, 4) << endl;
    cout << "Subtraction = " << c.sub(10, 4);

    return 0;
}
