#include<iostream>
#include<vector>
using namespace std;

class Rectangle {
public:
    double length;
    double breadth;

    Rectangle(double len, double brea) {
        length = len;
        breadth = brea;
    }

    double area(double l, double b) {
        double a = l * b;
        cout << "area: " << a << endl;
        return a;
    }
};

int main() {
    double len = 10.0;
    double breadth = 20.0;
    Rectangle r1(len,breadth);
    r1.area(10,20);

}