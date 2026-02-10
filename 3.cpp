#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << sub(x, y) << endl;

    return 0;
}
