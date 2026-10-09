#include<iostream>
using namespace std;
class Base {
public:
    int a;
protected:
    int b;

private:
    int c;
};

class Derived : private Base {
public:
    Derived(int a) {
        this->a = a;
        
       

        cout << "A: " << a << endl;
        

    }

    void set(int b) {
        this->b = b;
    }
    void get() {
        cout << "Private B: " << b << endl;
    }
};

int main() {
    Derived d(100);
    d.set(10);
    d.get();

}