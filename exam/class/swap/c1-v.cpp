#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside func(a): " << a << endl;
    cout << "Inside func(b): " << b << endl;
}

int main() {
    int x = 10, y = 20;

    swapValue(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}