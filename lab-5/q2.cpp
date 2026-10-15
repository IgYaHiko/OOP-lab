
#include <iostream>
using namespace std;

class Area {
public:
    int area(int length) {
        cout << "Square" << endl;
        return length * length;
    }

    double area(double width, double length) {
        cout << "Rectangle" << endl;
        return width * length;
    }

    double area(double PI, int r) {
        cout << "Circle" << endl;
        return PI * r * r;
    }
};

int main() {
    Area a;

    cout << a.area(12) << endl;
    cout << a.area(3.4, 5.5) << endl;
    cout << a.area(3.14, 12) << endl;

    return 0;
}
