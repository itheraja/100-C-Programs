#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape *s;

    Circle c;
    Rectangle r;

    s = &c;
    s->draw();  // Drawing Circle

    s = &r;
    s->draw();  // Drawing Rectangle

    return 0;
}
