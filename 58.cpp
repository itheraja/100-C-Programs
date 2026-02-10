#include <iostream>
using namespace std;

class Account {
public:
    virtual void interest() {
        cout << "Base interest" << endl;
    }
};

class Savings : public Account {
public:
    void interest() override {
        cout << "Savings interest = 4%" << endl;
    }
};

class Fixed : public Account {
public:
    void interest() override {
        cout << "Fixed interest = 7%" << endl;
    }
};

int main() {
    Account* a1 = new Savings();
    Account* a2 = new Fixed();

    a1->interest();
    a2->interest();

    delete a1;
    delete a2;
    return 0;
}
