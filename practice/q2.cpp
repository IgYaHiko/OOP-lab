#include<iostream>
using namespace std;
class B;

class A {
    int a;
    public:
    A() {
      a=10;
    }

    friend class B;
};

class B {
public:
    void display(A a) {
        cout << "A class Variable: " << a.a;
    }
};
int main() {
    A obj1;
    B obj2;

    obj2.display(obj1);

    return 0;
}