// singly inheritance
#include<iostream>
using namespace std;

class Person {
public:
    string Name;
    int age;

};

class Student: public Person{
public:
    string course;
    int roll;

    Student(string name, int age, string course, int roll) {
        this->Name = name;
        this->age = age;
        this->course = course;
        this->roll = roll;
    }
    void display() {
        cout << "Name: " << Name << endl;
        cout << "age: " << age << endl;
        cout << "course: " << course << endl;
        cout << "roll: " << roll << endl;
    }
};

int main()  {
    Student s1("Subhro", 18, "DSA", 119);
    s1.display();
    return 0;
}