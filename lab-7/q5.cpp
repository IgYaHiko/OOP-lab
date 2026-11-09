#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayInfo() {
        cout << "Vehicle Information" << endl;
    }
};

class Car : public Vehicle {
public:
    void displayInfo() override {
        cout << "Vehicle: Car" << endl;
        cout << "Number of wheels: 4" << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayInfo() override {
        cout << "Vehicle: Bike" << endl;
        cout << "Number of wheels: 2" << endl;
    }
};

class Bus : public Vehicle {
public:
    void displayInfo() override {
        cout << "Vehicle: Bus" << endl;
        cout << "Number of wheels: 6" << endl;
    }
};

int main() {
    Vehicle *ptr;

    Car c;
    Bike b;
    Bus bus;

    ptr = &c;
    ptr->displayInfo();

    ptr = &b;
    ptr->displayInfo();

    ptr = &bus;
    ptr->displayInfo();

    return 0;
}