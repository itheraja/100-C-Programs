#include <iostream>
using namespace std;

int main() {
    int choice, a, b;

    cout << "1. Add\n2. Subtract\nEnter choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Sum = " << a + b;
            break;
        case 2:
            cout << "Difference = " << a - b;
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
