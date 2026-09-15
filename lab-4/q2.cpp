// multi level inheritance 
#include<iostream>
using namespace std;

class Person {
public:
    string name;
};
class Employee : public Person {
public:
    int emp_id;

};
class Manager: public Employee {
public:
    string dept;
    Manager(string name, int emp_id, string dept) {
        this->name = name;
        this->emp_id = emp_id;
        this->dept = dept;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Dept: " << dept << endl;
    }
};
int main() {
    Manager m1("Subhro", 123233, "CS");
    m1.display();
    return 0;
}