#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Current month is October" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Next month will be November" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.show();
    d.show();

    return 0;
}