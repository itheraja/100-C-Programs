#include <iostream>
using namespace std;

int main() {
    try {
        throw 3.14;   // throwing double
    }
    catch (int e) {
        cout << "Caught int: " << e << endl;
    }
    catch (double e) {
        cout << "Caught double: " << e << endl;
    }
    catch (...) {
        cout << "Caught unknown exception";
    }
    return 0;
}
