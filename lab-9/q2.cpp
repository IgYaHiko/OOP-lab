#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    char x = 'A', y = 'B';

    cout << "Before Swapping Integers: " << a << " " << b << endl;
    swapValues(a, b);
    cout << "After Swapping Integers: " << a << " " << b << endl;

    cout << "\nBefore Swapping Characters: " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After Swapping Characters: " << x << " " << y << endl;

    return 0;
}