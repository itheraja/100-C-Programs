#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "Shape base class" << endl;
    }
};

class Circle : public Shape {
public:
    void circle() {
        cout << "Circle derived class" << endl;
    }
};

class Rectangle : public Shape {
public:
    void rectangle() {
        cout << "Rectangle derived class" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.display();
    c.circle();

    r.display();
    r.rectangle();

    return 0;
}
