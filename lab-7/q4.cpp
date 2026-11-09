#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float basicSalary;

public:
    Employee(string n, float s) {
        name = n;
        basicSalary = s;
    }

    virtual void calculateSalary() {
        cout << "Employee Salary" << endl;
    }
};

class PermanentEmployee : public Employee {
public:
    PermanentEmployee(string n, float s)
        : Employee(n, s) {}

    void calculateSalary() override {
        float salary = basicSalary + (basicSalary * 0.20);

        cout << "Permanent Employee: " << name << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

class ContractEmployee : public Employee {
public:
    ContractEmployee(string n, float s)
        : Employee(n, s) {}

    void calculateSalary() override {
        float salary = basicSalary + (basicSalary * 0.10);

        cout << "Contract Employee: " << name << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

int main() {
    Employee *ptr;

    PermanentEmployee p("Rahul", 30000);
    ContractEmployee c("Amit", 20000);

    ptr = &p;
    ptr->calculateSalary();

    ptr = &c;
    ptr->calculateSalary();

    return 0;
}