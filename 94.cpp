#include <iostream>
using namespace std;

class Strategy {
public:
    virtual int execute(int a, int b) = 0;
};

class Add : public Strategy {
public:
    int execute(int a, int b) override {
        return a + b;
    }
};

class Multiply : public Strategy {
public:
    int execute(int a, int b) override {
        return a * b;
    }
};

class Context {
private:
    Strategy* strategy;

public:
    void setStrategy(Strategy* s) {
        strategy = s;
    }

    int executeStrategy(int a, int b) {
        return strategy->execute(a, b);
    }
};

int main() {
    Context context;
    Add add;
    Multiply mul;

    context.setStrategy(&add);
    cout << "Add: " << context.executeStrategy(5, 3) << endl;

    context.setStrategy(&mul);
    cout << "Multiply: " << context.executeStrategy(5, 3) << endl;

    return 0;
}
