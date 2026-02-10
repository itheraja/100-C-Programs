#include <iostream>
using namespace std;

template <class T>
class Display {
public:
    void show(T data) {
        cout << "Data: " << data << endl;
    }
};

// specialization for int
template <>
class Display<int> {
public:
    void show(int data) {
        cout << "Integer Data: " << data << endl;
    }
};

int main() {
    Display<string> d1;
    d1.show("Hello");

    Display<int> d2;
    d2.show(10);

    return 0;
}
