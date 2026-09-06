#include<iostream>
using namespace std;

class Demo {
private:
    int id;

public:
    // Constructor
    Demo(int num) {
        id = num;
        cout << "Constructor called for object " << id << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for object " << id << endl;
    }
};

int main() {
    cout << "Program started...\n\n";
    
    Demo d1(1);    // Constructor called for d1
    Demo d2(2);    // Constructor called for d2
    
    cout << "\nInside main, objects are alive\n";
    
    {
        cout << "\nEntering inner block...\n";
        Demo d3(3);    // Constructor called for d3
        Demo d4(4);    // Constructor called for d4
        cout << "Leaving inner block...\n";
    }    // d3 and d4 destructors called here
    
    cout << "\nBack in main\n";
    Demo d5(5);    // Constructor called for d5
    
    cout << "\nProgram ending...\n\n";
    // d1, d2, d5 destructors called when program ends
    // Destructors are called in reverse order of construction
    
    return 0;
}