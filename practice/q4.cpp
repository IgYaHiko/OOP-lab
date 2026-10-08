#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "address of current object: " << this << endl;
    }
};

int main() {
    A a;

    cout << "Address of a object: " << &a << endl;

    a.show();
    return 0;


}