#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {50, 20, 40, 10, 30};

    sort(v.begin(), v.end());

    cout << "Sorted Elements: ";

    for (int x : v) {
        cout << x << " ";
    }

    cout << endl;

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    if (binary_search(v.begin(), v.end(), key)) {
        cout << "Element found." << endl;
    }
    else {
        cout << "Element not found." << endl;
    }

    return 0;
}