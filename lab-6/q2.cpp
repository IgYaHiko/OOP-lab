#include<iostream>
using namespace std;

class Number {
public:
    int x;

    Number(int x) {
        this->x = x;
    }

    void operator--() {
        x--;
    }

    void operator--(int x) {
        x--;
    }

};

int main() {
    Number n(10);

    cout << "Before: " << n.x << endl;
    --n;
    cout << "After: " << n.x << endl;
    n--;
    cout << n.x << endl;
    return 0;
}