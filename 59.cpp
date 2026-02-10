#include <iostream>
using namespace std;

class Employee {
public:
    virtual void salary() {
        cout << "Base Salary" << endl;
    }
};

class Manager : public Employee {
public:
    void salary() override {
        cout << "Manager Salary = 80,000" << endl;
    }
};

class Developer : public Employee {
public:
    void salary() override {
        cout << "Developer Salary = 60,000" << endl;
    }
};

int main() {
    Employee* e1 = new Manager();
    Employee* e2 = new Developer();

    e1->salary();
    e2->salary();

    delete e1;
    delete e2;
    return 0;
}
