#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 5, 6, 7, 8, 8};

    cout << "For Loop:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl << endl;

    cout << "While Loop:" << endl;
    int j = 0;
    while (j < nums.size()) {
        cout << nums[j] << " ";
        j++;
    }

    cout << endl << endl;

    cout << "Do-While Loop:" << endl;
    int k = 0;
    do {
        cout << nums[k] << " ";
        k++;
    } while (k < nums.size());

    return 0;
}