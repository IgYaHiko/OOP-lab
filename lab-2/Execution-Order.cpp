#include<iostream>
using namespace std;

class Demo {
private:
    int id;

public:
    // Constructor
    Demo(int num) : id(num) {
        cout << "Constructor: Object " << id << " created" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor: Object " << id << " destroyed" << endl;
    }
};

// Function that creates local objects
void createObjects() {
    cout << "\nEntering createObjects() function...\n";
    
    Demo obj3(3);    // Constructor called for obj3
    Demo obj4(4);    // Constructor called for obj4
    
    cout << "Leaving createObjects() function...\n";
    // obj3 and obj4 destructors called here
}

int main() {
    cout << "Program started\n";
    cout << "================\n";
    
    cout << "\nCreating objects inside main...\n";
    Demo obj1(1);    // Constructor called for obj1
    Demo obj2(2);    // Constructor called for obj2
    
    cout << "\nCalling createObjects() function...";
    createObjects(); // Objects created and destroyed inside function
    
    cout << "\nBack in main...\n";
    cout << "Creating another object in main...\n";
    Demo obj5(5);    // Constructor called for obj5
    
    cout << "\nProgram ending...\n";
    cout << "================\n";
    
    return 0;
    // Destructors called in reverse order: obj5, obj2, obj1
}