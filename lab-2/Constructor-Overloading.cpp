#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    double cgpa;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        rollNumber = 0;
        cgpa = 0.0;
        cout << "Default constructor called\n";
    }

    // Constructor with name and roll number
    Student(string n, int r) {
        name = n;
        rollNumber = r;
        cgpa = 0.0;
        cout << "Constructor (name, roll) called\n";
    }

    // Constructor with name, roll number, and CGPA
    Student(string n, int r, double c) {
        name = n;
        rollNumber = r;
        cgpa = c;
        cout << "Constructor (name, roll, cgpa) called\n";
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "---------------------------\n";
    }
};

int main() {
    cout << "Creating Student objects:\n\n";
    
    Student s1;                          // Default constructor
    Student s2("John Doe", 101);        // Constructor with name, roll
    Student s3("Jane Smith", 102, 3.75); // Constructor with name, roll, cgpa

    cout << "\nStudent Details:\n";
    
    
    cout << "\nStudent 1:\n";
    s1.display();
    
    cout << "Student 2:\n";
    s2.display();
    
    cout << "Student 3:\n";
    s3.display();

    return 0;
}