#include <iostream>
using namespace std;

void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    swapReference(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}