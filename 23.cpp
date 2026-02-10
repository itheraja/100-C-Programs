#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }
};

void display(Number n) {
    cout << "Value = " << n.value;
}

int main() {
    Number n1(25);
    display(n1);

    return 0;
}
