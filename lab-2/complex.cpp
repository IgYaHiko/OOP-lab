#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
        cout << "Default constructor called\n";
    }

    // Parameterized constructor
    Complex(double r, double i) {
        real = r;
        imag = i;
        cout << "Parameterized constructor called\n";
    }

    // Display function
    void display() {
        cout << "Complex Number: " << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    Complex c1;              // Default constructor
    Complex c2(3.5, 2.5);    // Parameterized constructor
    Complex c3(-2.0, -3.0);  // Parameterized constructor

    cout << "\nComplex Numbers:\n";
    cout << "================\n";
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c3: ";
    c3.display();

    return 0;
}