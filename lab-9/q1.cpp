#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a = 10, b = 20;
    float x = 12.5, y = 8.5;

    cout << "Maximum Integer: " << maximum(a, b) << endl;
    cout << "Maximum Float: " << maximum(x, y) << endl;

    return 0;
}