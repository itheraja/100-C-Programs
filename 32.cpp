#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Mammal : public Animal {
public:
    void warmBlooded() {
        cout << "Mammal is warm-blooded" << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.eat();
    d.warmBlooded();
    d.bark();
    return 0;
}
