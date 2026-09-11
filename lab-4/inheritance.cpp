#include<iostream>

using namespace std;

class Animal {
public:
   int dogCount;
    void sleep() {
        cout<< "sleeping" << endl;
    }

    void eating() {
        cout << "eating" << endl;
    }
};

class Dog: public Animal {
public:
    void bark() {
        cout << "barking" << endl;
    }
    int dogc() {
        dogCount = 10;
        return dogCount;
    }
};

int main() {
    Dog d;

    d.sleep();
    d.eating();
    d.bark();
    int dogcount = d.dogc();
    return 0;
}