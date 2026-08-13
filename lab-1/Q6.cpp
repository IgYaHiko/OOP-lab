#include <iostream>
using namespace std;

class Student {

private:

    // Private member function
    void privateFunction() {
        cout << "Private function called." << endl;
    }

public:

    // Public member function
    void publicFunction() {
        cout << "Public function called." << endl;

        // Calling private function inside public function
        privateFunction();
    }
};

int main() {

    Student s;

    // Calling public function
    s.publicFunction();

    return 0;
}