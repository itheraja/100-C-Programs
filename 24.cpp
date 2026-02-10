#include <iostream>
using namespace std;

class Sample {
public:
    int x;

    Sample(int a) {
        x = a;
    }
};

Sample createObject() {
    Sample s(100);
    return s;
}

int main() {
    Sample obj = createObject();
    cout << "Value = " << obj.x;

    return 0;
}
