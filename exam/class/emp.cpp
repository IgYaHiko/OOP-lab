#include<iostream>
using namespace std;

class Employee {
public:
public:
    string name;
    double basicSalary;
    double bonus;
    double finalSalary;

    void getData() {
        cout << "Enter the name: " << endl;
        cin >> name;

        cout << "Enter Basic Salary: " << endl;
        cin >> basicSalary;

        cout << "Enter the Bonus: " << endl;
        cin >> bonus;
    }
    void calculateSalary() {
        finalSalary = basicSalary + bonus;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Final salary: " << finalSalary << endl;
    }
    void processEmployee() {
        calculateSalary();
        display();
    }
};

int main() {
    Employee emp;
    emp.getData();
    emp.processEmployee();
    return 0;
}