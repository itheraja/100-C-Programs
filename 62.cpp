#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    string name;
};

int main() {
    Student s;
    ifstream inFile("student.txt");

    inFile >> s.roll >> s.name;
    inFile.close();

    cout << "Roll: " << s.roll << endl;
    cout << "Name: " << s.name;
    return 0;
}
