#include <iostream>
using namespace std;

class IShape {
public:
    virtual void draw() = 0;  // pure virtual function
};

class Circle : public IShape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle c;
    c.draw();
    return 0;
}
