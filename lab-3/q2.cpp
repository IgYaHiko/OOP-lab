#include <iostream>
using namespace std;

class Number {
private:
    int a, b;

public:
    // Constructor
    Number(int x, int y) {
        a = x;
        b = y;
    }

    // Declaring friend function
    friend void calculateSum(Number n);
};

// Friend function definition
void calculateSum(Number n) {
    int sum = n.a + n.b;
    cout << "Value of a: " << n.a << endl;
    cout << "Value of b: " << n.b << endl;
    cout << "Sum: " << sum << endl;
}

int main() {
    Number num(10, 20);
    calculateSum(num);
    return 0;
}