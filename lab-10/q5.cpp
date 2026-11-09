#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> students;

    int n, roll, searchRoll;
    string name;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;

        students[roll] = name;
    }

    cout << "\nAll Student Records:\n";

    for (auto x : students) {
        cout << "Roll Number: " << x.first
             << ", Name: " << x.second << endl;
    }

    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    if (students.find(searchRoll) != students.end()) {
        cout << "Student Found!" << endl;
        cout << "Name: " << students[searchRoll] << endl;
    }
    else {
        cout << "Student not found." << endl;
    }

    return 0;
}