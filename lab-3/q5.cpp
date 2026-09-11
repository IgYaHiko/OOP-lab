#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // Private data members
    string accountNo;
    double balance;

    // Static data member to keep track of total accounts
    static int totalAccounts;

public:
    // Constructor to initialize account details and increment account count
    BankAccount(string accNo, double bal) {
        accountNo = accNo;
        balance = bal;
        totalAccounts++; // Increment count every time an object is created
    }

    // Friend function declaration to display private account details
    friend void displayAccountDetails(BankAccount acc);

    // Static member function to display the total number of accounts
    static void showTotalAccounts() {
        cout << "Total Bank Accounts created: " << totalAccounts << endl;
    }
};

// Initialization of the static data member outside the class
int BankAccount::totalAccounts = 0;

// Friend function definition
void displayAccountDetails(BankAccount acc) {
    cout << "Account Number: " << acc.accountNo << endl;
    cout << "Balance: $" << acc.balance << endl;
    cout << "------------------------" << endl;
}

int main() {
    // Creating at least three objects
    BankAccount acc1("ACC1001", 1500.50);
    BankAccount acc2("ACC1002", 3200.00);
    BankAccount acc3("ACC1003", 750.25);

    // Demonstrating the friend function
    cout << "--- Account Details ---" << endl;
    displayAccountDetails(acc1);
    displayAccountDetails(acc2);
    displayAccountDetails(acc3);

    // Demonstrating the static member function
    cout << "--- Bank Statistics ---" << endl;
    // Calling static member function using the class name
    BankAccount::showTotalAccounts();

    return 0;
}