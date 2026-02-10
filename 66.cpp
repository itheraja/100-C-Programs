#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;   // throwing an integer
    }
    catch (int e) {
        cout << "Caught exception: " << e;
    }
    return 0;
}
