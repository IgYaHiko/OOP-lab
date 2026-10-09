#include<iostream>
using namespace std;

class Student {
private:
    string name;
    double *marks;
    int numSubjects;
public:
    Student(string name, int numSubjects) {
        this->name = name;
        this->numSubjects = numSubjects;
        marks = new double[numSubjects];

        cout << "Enter marks:" << endl;

        for(int i=0; i<numSubjects; i++) {
            cin >> marks[i];
        }
    }

    int totalMarks() {
        int total = 0;
        for(int i=0; i<numSubjects; i++) {
            total += marks[i];
        }

        return total;
    }

    void display() {
        cout << "Student: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < numSubjects; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total: " << totalMarks() << endl;

    }

    ~Student() {
        delete[] marks;
    }
};

int main() {
    Student s("Subhro", 10);
    s.display();
    return 0;
}