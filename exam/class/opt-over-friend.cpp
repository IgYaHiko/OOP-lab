#include<iostream>
using namespace std;

class Number {
private:
    int x;

public:
    Number(int x) {
        this->x = x;
    }

    friend Number operator+(Number x, Number y);

    void display() {
        cout << "X: " << x << endl;
    }

};

Number operator+(Number x, Number y) {
    Number temp(0);
    temp = x.x + y.x;
    return temp;
}

int main() {
    Number n1(10);
    Number n2(20);

    Number res = n1 + n2;
    res.display();
    return 0;

}