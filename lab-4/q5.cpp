#include<iostream>
using namespace std;

class College {
public:
    string clg_name;
    College(string clg_name) {
        this->clg_name = clg_name;
    }
};

class Department : public College {
public:
    string department_name;
    Department(string clg_name, string department_name) : College(clg_name) {
        this->department_name = department_name;
       
        
    }

    void display() {
        cout << "\n--- College Details ---\n";
        cout << "college name: " << clg_name << endl;
        cout << "Department name: " << department_name << endl;
    }
};

int main() {
    Department d1("Thapar University" , "CS");
    d1.display();
    return 0;
}