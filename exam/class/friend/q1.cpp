#include<iostream>
using namespace std;

class DepartmentB;

class DepartmentA {
private:
    double budgetA;
public:
    DepartmentA(double da) {
        this->budgetA = da;
    }
    friend double calculateTotal(DepartmentA a, DepartmentB b);
};

class DepartmentB {
private:
    double budgetB;
public:
    DepartmentB(double db) {
        this->budgetB = db;
    }
    friend double calculateTotal(DepartmentA a, DepartmentB b);
};

double calculateTotal(DepartmentA a, DepartmentB b) {
    
    double total = a.budgetA + b.budgetB;
    return total;
}

int main() {
    DepartmentA da(100.0);
    DepartmentB db(200.5);

    double total = calculateTotal(da, db);
    cout << "Total Budget: " << total << endl;
    return 0;

}