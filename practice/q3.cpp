#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Hello from Student class!" << endl;
    }

    void showNumber(int n) {
        cout << "Number = " << n << endl;
    }
};

int main() {
    Student s;
    Student *prt = &s;

    prt->display();
    prt->showNumber(5);


}