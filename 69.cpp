#include <iostream>
using namespace std;

class MyException {
public:
    string message;
    MyException(string msg) {
        message = msg;
    }
};

int main() {
    try {
        throw MyException("Custom Error Occurred!");
    }
    catch (MyException &e) {
        cout << e.message;
    }
    return 0;
}
