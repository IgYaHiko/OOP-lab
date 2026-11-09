#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0) {
            throw age;
        }

        cout << "Your age is: " << age << endl;
    }
    catch (int x) {
        cout << "Error: Age cannot be negative." << endl;
    }

    return 0;
}