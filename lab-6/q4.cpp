#include <iostream>
using namespace std;

class Number {
    int num;

public:
    Number(int n) {
        num = n;
    }

    // Overload + operator
    Number operator+(Number obj) {
        return Number(num + obj.num);
    }

    // Overload - operator
    Number operator-(Number obj) {
        return Number(num - obj.num);
    }

    void display() {
        cout << num << endl;
    }
};

int main() {
    Number n1(20), n2(10);

    Number sum = n1 + n2;
    Number diff = n1 - n2;

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}