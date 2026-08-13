#include <iostream>
using namespace std;

namespace First {
    int number = 10;

    void display() {
        cout << "First namespace" << endl;
        cout << "Number: " << number << endl;
    }
}

namespace Second {
    int number = 20;

    void display() {
        cout << "Second namespace" << endl;
        cout << "Number: " << number << endl;
    }
}

int main() {

    First::display();
    Second::display();

    cout << "\nFirst number: " << First::number << endl;
    cout << "Second number: " << Second::number << endl;

    return 0;
}