// Hierarchial Inheritance
#include<iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    string model;
};

class Car : public Vehicle{
public:
    int number_door;
    Car (string brand, string model, int number_door) {
        this->brand = brand;
        this->model = model;
        this->number_door = number_door;
    }

    void display() {
        cout << "\n---- CAR DETAILS ----\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number door: " << number_door << endl; 
    }
};

class Bike : public Vehicle{
public:
    int eng_capacity;
    Bike (string brand, string model, int eng_capacity) {
        this->brand = brand;
        this->model = model;
        this->eng_capacity = eng_capacity;
    }

    void display() {
        cout << "\n---- BIKE DETAILS ----\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << eng_capacity << endl;
    }
};
int main() {
    Car c("BMW", "M5", 4);
    Bike b("BMW", "Ad", 10000);
    c.display();
    b.display();
    return 0;

}