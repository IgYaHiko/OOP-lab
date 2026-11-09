#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "First Value: " << first << endl;
        cout << "Second Value: " << second << endl;
    }
};

int main() {
    Pair<int, string> p(101, "Rahul");

    p.display();

    return 0;
}