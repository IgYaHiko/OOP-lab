#include <iostream>
using namespace std;

template <class T>
class ArrayOperations {
    T arr[5];

public:
    void input() {
        cout << "Enter 5 elements: ";

        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array Elements: ";

        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void largest() {
        T max = arr[0];

        for (int i = 1; i < 5; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        cout << "Largest Element: " << max << endl;
    }
};

int main() {
    ArrayOperations<int> obj;

    obj.input();
    obj.display();
    obj.largest();

    return 0;
}