#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
};

int main() {
    Rectangle r;
    r.length = 10;
    r.width = 5;

    cout << "Area = " << r.length * r.width;
    return 0;
}
