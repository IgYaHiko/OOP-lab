#include <iostream>
using namespace std;

class Employee {
private:
    double salary;

public:
    // Constructor
    Employee(double s) {
        salary = s;
    }

    // Declaring friend function that takes two objects as arguments
    friend void compareSalary(Employee e1, Employee e2);
};

// Friend function definition
void compareSalary(Employee e1, Employee e2) {
    cout << "Employee 1 Salary: " << e1.salary << endl;
    cout << "Employee 2 Salary: " << e2.salary << endl;

    if (e1.salary > e2.salary) {
        cout << "Higher Salary is: " << e1.salary << " (Employee 1)" << endl;
    } else if (e2.salary > e1.salary) {
        cout << "Higher Salary is: " << e2.salary << " (Employee 2)" << endl;
    } else {
        cout << "Both salaries are equal." << endl;
    }
}

int main() {
    Employee emp1(50000);
    Employee emp2(65000);
    
    compareSalary(emp1, emp2);
    return 0;
}