#include<iostream>
#include<string>
using namespace std;

class Print {
public:
    
    void display(int x) {
        cout << "X: " << x << endl;
        return; 
    }

    void display(double x) {
        cout << "X: " << x << endl;
        return;
    }

    void display(string x) {
        cout << "x: " << x << endl;
        return;
    } 
};

int main() {
    Print p;
    p.display(12);
    p.display(12.5);
    p.display("12");
    return 0;
}