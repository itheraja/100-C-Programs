#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x1 = 0, int y1 = 0) {
        x = x1;
        y = y1;
    }

    Point operator-(const Point &p) {
        Point temp;
        temp.x = x - p.x;
        temp.y = y - p.y;
        return temp;
    }

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, 5), p2(3, 2);
    Point p3 = p1 - p2;

    p3.display();
    return 0;
}
