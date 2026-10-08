#include<iostream>
using namespace std;


class Employee {
public:
    string name;
    string dept;

    void getData(string &name, string &dept);
    void setData(string *n, string *d);
    void display();
   
};


void Employee::getData(string &name, string &dept) {
    cout << "Name: " << name;
    cin >> name;
    
    cout << "Department name: " << dept;
    cin >> dept;
}

void Employee::setData(string *n, string *d) {
    name = *n;
    dept = *d;
}

void Employee::display() {
    cout << "Name: " << name << endl;
    cout << "Department: " << dept << endl;

}





int main() {
    Employee e1;
    string n, d;
    e1.getData(n,d);
    e1.setData(&n, &d);
    e1.display();
    return 0;


}