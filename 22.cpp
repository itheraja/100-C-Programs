#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void getData() {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }

    void showData() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        s[i].getData();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; i++) {
        s[i].showData();
    }

    return 0;
}
