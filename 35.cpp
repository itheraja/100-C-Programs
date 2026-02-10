#include <iostream>
using namespace std;

class Vehicle {
public:
    void vehicleType() {
        cout << "Vehicle type" << endl;
    }
};

class Car : public Vehicle {
public:
    void carType() {
        cout << "Car type" << endl;
    }
};

class SportsCar : public Car {
public:
    void sportsFeature() {
        cout << "Sports car feature" << endl;
    }
};

class Bike : public Vehicle {
public:
    void bikeType() {
        cout << "Bike type" << endl;
    }
};

int main() {
    SportsCar s;
    s.vehicleType();
    s.carType();
    s.sportsFeature();

    Bike b;
    b.vehicleType();
    b.bikeType();

    return 0;
}
