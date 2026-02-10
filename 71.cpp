#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(3, 4) << endl;      // 7
    cout << add<double>(2.5, 3.5) << endl; // 6.0
    return 0;
}
