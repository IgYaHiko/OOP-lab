#include <iostream>
#include <string>
using namespace std;

class Students {
private:
    string name;
    int roll_no;
    string degree;
    string hostel;
    double cgpa;

    // private method
    void updateCgpa() {
        cout << "Update a new cgpa: ";
        cin >> cgpa;
    }
    void updateHostel() {
        cout << "Update new Hostel: ";
        cin >> hostel;
    }
public:
    void addDetails() {
         cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll no: ";
        cin >> roll_no;

        cout << "Enter degree: ";
        cin >> degree;

        cout << "Enter hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }
    void updateDetails() {
        cout << "Updating student details...\n";

        // we can use the private func only in the class itself;
        updateHostel();
        updateCgpa();
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }


};

int main() {
    Students s1;
    cout << "\nFirst time adding student details\n";
    s1.addDetails();

    cout << "display student details before updating the student";
    s1.displayDetails();
    int choice;
    cout << "\nDo you want to update the data?\n";   
    cout << "1. Yes\n";
    cout << "2. No\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        s1.updateDetails();
        break;
    
    case 2:
        cout << "don't wanna that's cool!!!";
        break;
    }
    return 0;
}