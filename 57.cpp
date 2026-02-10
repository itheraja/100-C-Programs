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
    Shape* arr[2];
    Circle c;
    Rectangle r;

    arr[0] = &c;
    arr[1] = &r;

    for (int i = 0; i < 2; i++) {
        arr[i]->draw();
    }

    return 0;
}
