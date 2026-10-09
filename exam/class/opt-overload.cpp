#include<iostream>
using namespace std;

class Number {
private:
    int x;
public:
    Number(int x) {
        this->x = x;

    }

    Number operator+(Number n) {
       Number temp(0);
       temp.x = x + n.x;
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
    res.display();
    return 0;
}
