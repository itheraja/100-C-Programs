#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "Person info" << endl;
    }
};

class Father : virtual public Person { };
class Mother : virtual public Person { };

class Child : public Father, public Mother { };

int main() {
    Child c;
    c.info();  // No ambiguity
    return 0;
}
