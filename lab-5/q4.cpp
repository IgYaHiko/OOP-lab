
#include <iostream>
using namespace std;

class Result {
public:
    void result(int a) {
        cout << "Marks: " << a << endl;
    }

    double result(int a, int b) {
        return (a + b) / 2.0;
    }

    double result(int a, int b, int c) {
        return (a + b + c) / 3.0;
    }
};

int main() {
    Result r;

    r.result(80);
    cout << r.result(80, 90) << endl;
    cout << r.result(80, 90, 70) << endl;

    return 0;
}
