#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;
    }

    friend void showLength(Box b);
};

void showLength(Box b) {
    cout << "Length = " << b.length;
}

int main() {
    Box b(15);
    showLength(b);

    return 0;
}
