#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int roll;
    string name;

    Student(int r, string n) : roll(r), name(n) {}
};

int main() {
    vector<Student> students;
    students.push_back(Student(1, "Aman"));
    students.push_back(Student(2, "Riya"));

    for (auto s : students) {
        cout << s.roll << " " << s.name << endl;
    }

    return 0;
}
