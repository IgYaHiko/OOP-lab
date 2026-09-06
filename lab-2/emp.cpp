#include<iostream>
using namespace std;

class Employee {
    string name;
    int id;
    int salary;
public:
    Employee(string name, int id, int salary) {
        name = name;
        id = id;
        salary = salary;
    }
    // Method to display employee details
    void displayDetails() {
        cout << "\nEmployee Details" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: $" << salary << endl;
       
    }

};

int main() {
    Employee emp1("Subhro", 1212, 2000);
    emp1.displayDetails();
   
}