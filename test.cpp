#include <iostream>
using namespace std;

class Tracker {
    int id;
public:
    Tracker(int i) : id(i) { cout << "C" << id; }
    ~Tracker() { cout << "D" << id; }
};

Tracker g1(1);

int main() {
    cout << "M";
    Tracker l1(2);
    {
        Tracker l2(3);
    }
    return 0;
}