#include<iostream>
using namespace std;

class Student {

public:
    static int totalStudent;
    int rollNo;
    string name;
    double marks;

    void registerStudent(int roll, string name, double marks) {
        totalStudent++;
        this->rollNo = roll;
        this->name = name;
        this->marks = marks;
    }

    static int getTotalStudent() {
        return totalStudent;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    
};

int Student::totalStudent = 0;
int main() {
    Student s1, s2, s3;

    s1.registerStudent(119, "Subhra Kolay", 90.0);
    s2.registerStudent(120, "Tanya Kalra", 80.00);
    s3.registerStudent(180, "Tanya ji", 90.00);

    s1.display();
    s2.display();
    s3.display();

    cout << "Total Student: " << Student::getTotalStudent() << endl;
}