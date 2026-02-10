#include <iostream>
#include <vector>
using namespace std;

class Observer {
public:
    virtual void update(int value) = 0;
};

class Subject {
private:
    vector<Observer*> observers;
    int value;

public:
    void attach(Observer* obs) {
        observers.push_back(obs);
    }

    void setValue(int v) {
        value = v;
        notify();
    }

    void notify() {
        for (auto obs : observers) {
            obs->update(value);
        }
    }
};

class Display : public Observer {
public:
    void update(int value) override {
        cout << "Value updated: " << value << endl;
    }
};

int main() {
    Subject s;
    Display d1, d2;

    s.attach(&d1);
    s.attach(&d2);

    s.setValue(10);
    return 0;
}
