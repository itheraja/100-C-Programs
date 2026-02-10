#include <iostream>
using namespace std;

class Sample {
private:
    int x;

public:
    Sample(int x) {
        this->x = x;   // distinguishes member from parameter
    }

    void display() {
        cout << "Value = " << x;
    }
};

int main() {
    Sample s(20);
    s.display();

    return 0;
}
