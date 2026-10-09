#include<iostream>
using namespace std;

class Bank {
private:
    int emp_id;
    double salary;
public:
    string name;

    void setData(int id, double salary, string name) {
        this->emp_id = id;
        this->salary = salary;
        this->name = name;
    }

    void display() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
        cout << "name: " << name << endl;
    }

};

int main() {
    Bank b1;
    b1.setData(101, 10000, "Subhro");
    b1.display();
    return 0;
}