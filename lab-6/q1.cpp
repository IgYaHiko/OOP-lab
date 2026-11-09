#include<iostream>
using namespace std;

class Counter {
public:
    int count;
    Counter(int x) {
        this->count = x;
    }

    void operator++() {
        count++;
    }
    void operator++(int x) {
        count++;
    }



};

int main() {
    Counter c(5);
    cout << "Before: " << c.count << endl;
    ++c;
    cout << "After: " << c.count << endl;
    c++;
    cout << c.count << endl;

    return 0;
}