#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_back(20);
    l.push_back(30);

    l.push_front(10);

    cout << "Original List: ";

    for (int x : l) {
        cout << x << " ";
    }

    cout << endl;

    l.pop_front();

    cout << "After removing first element: ";

    for (int x : l) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}