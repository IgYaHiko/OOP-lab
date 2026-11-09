#include<iostream>
using namespace std;

class Number {
public:
    int x;
    Number(int x) {
        this->x = x;
    }

    Number operator+(Number n) {
        Number temp(0);
        temp.x = x + n.x;
        return temp;
    }

    Number operator-(Number n) {
        Number temp(0);
        temp.x = x - n.x;
        return temp;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number res = n1 + n2;
    Number res1 = n1 - n2;
    res.display();
    res1.display();
    return 0;
}