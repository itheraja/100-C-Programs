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
    s.roll = 2;
    s.name = "Riya";

    ofstream outFile("student.txt", ios::app);
    outFile << endl << s.roll << " " << s.name;
    outFile.close();

    cout << "Data appended to file.";
    return 0;
}
