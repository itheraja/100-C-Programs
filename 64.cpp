#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    string name;
};

int main() {
    Student s1, s2;

    s1.roll = 1; s1.name = "Aman";
    s2.roll = 2; s2.name = "Riya";

    ofstream outFile("students.txt");
    outFile << s1.roll << " " << s1.name << endl;
    outFile << s2.roll << " " << s2.name << endl;
    outFile.close();

    cout << "Data saved successfully.";
    return 0;
}
