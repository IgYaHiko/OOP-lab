#include<iostream>
using namespace std;

class Car {
public:
    int year;
    string model;
    string color;
    double price;
    double mileage;

    void modifyByValue(Car c) {
        c.price += 10000;
        cout << "Inside function: " << c.price << endl;
    }

    void modifyByReference(Car &c) {
        c.mileage = 5;
        cout << "Inside the function: " << c.mileage << endl;
    }

    void modifyByPointer(Car *c) {
        c->model = "BMW";
        cout << "Inside the function (call by pointer): " << c->model << endl;
    }

    
};  

int main() {
    Car c;
    c.model = "Honda City";
    c.year = 2022;
    c.price = 800000;
    c.mileage = 15000;

    c.modifyByValue(c);

    c.modifyByReference(c);

    c.modifyByPointer(&c);

    cout << "original Price (call by value): " << c.price << endl; 
    cout << "original Milage (call by reference) : " << c.mileage << endl; 
    cout << "original Model (call by pointer): " << c.model << endl;
    return 0;
}