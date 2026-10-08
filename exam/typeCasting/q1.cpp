#include<iostream>
using namespace std;

class Employee {
public:
    int basic_salary;
    double bonus;
    int working_days;


    void getData() {
        cout << "Enter Your Salary: ";
        cin >> basic_salary;
       
        cout << "Enter Bonus: ";
        cin >> bonus;
        

        cout << "Enter Working Days: ";
        cin >> working_days;
        

    }

    double calculateDailySalary(int basic, int working) {
        // explicit
        double daily = static_cast<double>(basic) / working;
        return daily;
    }
    
    double finalSalary(int basic, double bonus) {
        // implecit 
        double final = basic + bonus;
        return final;
    }

    void display() {
        cout << "Basic Salary is: " << basic_salary << endl;
        cout << "Bonus is: " << bonus << endl;
        cout << "Working days: " << working_days << endl;
    }

    void processEmployee() {
        cout << "Daily Salary is: " << calculateDailySalary(basic_salary, working_days) << endl;
        cout << "Final Salary is: " << finalSalary(basic_salary, bonus) << endl;
        display();
    }
};

int main() {
    Employee e1;
    e1.getData();
    e1.processEmployee();
    return 0;
}