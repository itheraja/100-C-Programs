#include <iostream>
using namespace std;

template <class T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
};

int main() {
    Calculator<int> c;
    cout << c.add(5, 3);
    return 0;
}
