#include<iostream>
using namespace std;

class Account {
public:
    int accountNumber;
    double balance;

    Account(int acn, double b) {
        this->accountNumber = acn;
        this->balance = b;
    }

    Account (Account &a) {
        accountNumber = a.accountNumber;
        balance = a.balance;
    }
};

int main() {
    Account a1(124343243,100);
    Account a2 = a1;

    cout << "Copy(ANC): " << a2.accountNumber << endl;
    cout << "Copy(Balance): " << a2.balance << endl;

    return 0;

}