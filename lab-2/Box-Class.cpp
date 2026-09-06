#include<iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Default constructor
    Box() {
        length = 1.0;
        width = 1.0;
        height = 1.0;
        cout << "Default constructor called\n";
    }

    // Parameterized constructor
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        cout << "Parameterized constructor called\n";
    }

    // Function to calculate and display volume
    void calculateAndDisplayVolume() {
        double volume = length * width * height;
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
        cout << "Volume: " << volume << endl << endl;
    }
};

int main() {
    Box box1;                   
    Box box2(5.0, 3.0, 2.0);    
    Box box3(10.5, 4.2, 6.8);   

    cout << "\nBox 1 details:\n";
    box1.calculateAndDisplayVolume();
    
    cout << "Box 2 details:\n";
    box2.calculateAndDisplayVolume();
    
    cout << "Box 3 details:\n";
    box3.calculateAndDisplayVolume();

    return 0;
}