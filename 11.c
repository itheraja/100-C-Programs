#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
};

int main() {
    Student s;
    s.roll = 1;
    s.name = "Alex";

    cout << "Roll: " << s.roll << endl;
    cout << "Name: " << s.name;

    return 0;
}
