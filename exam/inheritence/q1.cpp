#include<iostream>
using namespace std;

class Employee {
public:
    string name;
    double salary;
};

class Manager : public Employee {
public:
    int teamSize;

    Manager(string name, double salary, int team) {
        this->name = name;
        this->salary = salary;
        this->teamSize = team;
    } 

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salay : " << salary << endl;
        cout << "Team size: " << teamSize << endl;
    }
};

int main() {
    Manager m1("MANU", 100000.00, 10);
    m1.display();
    return 0;
}