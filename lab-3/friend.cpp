#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int mark;

public:
    Student(string n, int m) {
        name = n;
        mark = m;
    }

    // Declaring friend function
    friend void displayDetails(Student s);
};

//frined func definition 
void displayDetails(Student s) {
    cout << "Student Name: " << s.name << endl;
    cout << "Marks: " << s.mark << endl;
}

int main() {
    Student student("Subhro", 95);
    displayDetails(student);
    return 0;
}