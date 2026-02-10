#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;  // pure virtual function
};

class Circle : public Shape {
private:
    int r;

public:
    Circle(int radius) {
        r = radius;
    }

    void area() override {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main() {
    Circle c(5);
    c.area();
    return 0;
}
