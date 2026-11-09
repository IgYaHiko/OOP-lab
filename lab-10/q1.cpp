#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int num, sum = 0;

    cout << "Enter 5 integers: ";

    for (int i = 0; i < 5; i++) {
        cin >> num;
        v.push_back(num);
    }

    cout << "Vector elements: ";

    for (int x : v) {
        cout << x << " ";
        sum += x;
    }

    cout << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}