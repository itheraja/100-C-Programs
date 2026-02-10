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
    s.roll = 1;
    s.name = "Aman";

    ofstream outFile("student.txt");
    outFile << s.roll << " " << s.name;
    outFile.close();

    cout << "Data written to file.";
    return 0;
}
