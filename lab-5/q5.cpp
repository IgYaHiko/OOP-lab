
#include <iostream>
using namespace std;

class Maximum {
public:
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }

    int findMax(int a, int b, int c) {
        int max = a;

        if (b > max)
            max = b;

        if (c > max)
            max = c;

        return max;
    }

    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Maximum m;

    cout << m.findMax(10, 20) << endl;
    cout << m.findMax(10, 30, 20) << endl;
    cout << m.findMax(5.5, 8.2) << endl;

    return 0;
}
