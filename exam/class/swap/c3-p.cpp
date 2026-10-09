#include <iostream>
using namespace std;

void swapPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    swapPointer(&x, &y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}