#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }
};

int Counter::count = 0;   // static member definition

int main() {
    Counter c1, c2, c3;
    cout << "Total objects = " << Counter::count;

    return 0;
}
