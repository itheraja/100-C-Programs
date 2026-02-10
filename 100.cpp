#include <iostream>
#include <vector>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}
    virtual void display() {
        cout << "ID: " << id << ", Name: " << name;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(string n, int i, int t) : Employee(n, i), teamSize(t) {}
    void display() override {
        cout << "Manager -> ";
        Employee::display();
        cout << ", Team Size: " << teamSize << endl;
    }
};

class Developer : public Employee {
private:
    string skill;

public:
    Developer(string n, int i, string s) : Employee(n, i), skill(s) {}
    void display() override {
        cout << "Developer -> ";
        Employee::display();
        cout << ", Skill: " << skill << endl;
    }
};

int main() {
    vector<Employee*> employees;
    employees.push_back(new Manager("John", 101, 5));
    employees.push_back(new Developer("Aman", 102, "C++"));

    for (auto e : employees) {
        e->display();
    }

    // clean up
    for (auto e : employees) {
        delete e;
    }

    return 0;
}
