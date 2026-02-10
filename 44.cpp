#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    void setData(string n, int i) {
        name = n;
        id = i;
    }

    void showData() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    void setTeamSize(int t) {
        teamSize = t;
    }

    void showManager() {
        showData();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager m;
    m.setData("John", 101);
    m.setTeamSize(5);
    m.showManager();
    return 0;
}
