#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll_no;

public:
    Student() {
        name = "Subhro";
        roll_no = 101;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main() {
    Student s1;

    return 0;
}