#include<iostream>
using namespace std;
class Student {
private:
    string name;
    double marks;
public:
    Student(string name, double marks) {
        this->name = name;
        this->marks = marks;
    }

    friend Student operator+(Student s1, Student s2);

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

Student operator+(Student s1, Student s2) {
    Student temp("Combined",0.0);
    temp.marks = s1.marks +  s2.marks;

    return temp;
    
}

int main() {
    Student s1("Tanya", 90.0);
    Student s2("Subhro", 80.0);

    Student res = s1 + s2;

    res.display();
    return 0;
}