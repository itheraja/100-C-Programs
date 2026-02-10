#include <iostream>
using namespace std;

class Account {
private:
    int balance;

public:
    Account(int b) : balance(b) {}

    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
        }
    }

    void showBalance() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    Account acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.showBalance();
    return 0;
}
