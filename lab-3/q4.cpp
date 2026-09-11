#include <iostream>
using namespace std;

class Student {
private:
    // Static member to keep track of count
    static int count; 

public:
    // Constructor increments the count every time an object is created
    Student() {
        count++;
    }

    // Static function to return the object count
    static int getCount() {
        return count;
    }
};

// Initializing static data member outside the class
int Student::count = 0;

int main() {
    // Creating three objects
    Student s1;
    Student s2;
    Student s3;

    // Displaying the total number of objects
    cout << "Total objects created: " << Student::getCount() << endl;

    return 0;
}