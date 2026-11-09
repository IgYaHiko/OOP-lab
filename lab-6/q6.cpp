#include <iostream>
using namespace std;

class Number {
    int num;

public:
    Number(int n) {
        num = n;
    }

    Number operator-(Number obj) {
        return Number(num - obj.num);
    }

    void display() {
        cout << num << endl;
    }
};

int main() {
    Number n1(20), n2(10);

    Number diff = n1 - n2;

    cout << "Subtraction: ";
    diff.display();

    return 0;
}