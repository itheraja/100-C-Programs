#include <iostream>
#include <string>
using namespace std;

// Model
class Student {
private:
    string name;
public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};

// View
class StudentView {
public:
    void display(string name) {
        cout << "Student Name: " << name << endl;
    }
};

// Controller
class StudentController {
private:
    Student model;
    StudentView view;

public:
    void setName(string name) {
        model.setName(name);
    }

    void updateView() {
        view.display(model.getName());
    }
};

int main() {
    StudentController controller;
    controller.setName("Aman");
    controller.updateView();
    return 0;
}
