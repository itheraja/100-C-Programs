#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;

public:
    void setData(string n, int r) {
        name = n;
        roll = r;
    }
};

class Result : public Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    void show() {
        cout << "Name: " << name << ", Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Result r[2];

    r[0].setData("Aman", 1);
    r[0].setMarks(85);

    r[1].setData("Riya", 2);
    r[1].setMarks(90);

    for (int i = 0; i < 2; i++) {
        r[i].show();
    }

    return 0;
}
