#include <iostream>
using namespace std;

class Father {
public:
    void fatherSkill() {
        cout << "Father skill" << endl;
    }
};

class Mother {
public:
    void motherSkill() {
        cout << "Mother skill" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childSkill() {
        cout << "Child skill" << endl;
    }
};

int main() {
    Child c;
    c.fatherSkill();
    c.motherSkill();
    c.childSkill();
    return 0;
}
