#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    // Copy Constructor
    Number(const Number &obj) {
        value = obj.value;
    }

    void show() {
        cout << "Value = " << value;
    }
};

int main() {
    Number n1(10);
    Number n2 = n1;   // Copy constructor called

    n2.show();
    return 0;
}
