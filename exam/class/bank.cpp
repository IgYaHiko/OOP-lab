#include<iostream>
using namespace std;

class Account {
public:
    int accountNumber;
    string name;
    double balance;
    
    Account(int accountNumber, string name, double balance) {
        this->accountNumber = accountNumber;
        this->name = name;
        this->balance = balance;
    }

   void depositeMoney(int amount) {
        if(amount < 0) {
            cout << "Amount have to be more that zero" << endl;
        }

        balance += amount;
   }

   void withDraw(int amount) {
        if(amount < 0) {
            cout << "Amount have to be more that zero" << endl;
        }
        if(amount > balance) {
            cout << "Insuffient Balance" << endl;
        }
        balance -= amount;
   }

   void display() {
      cout << "\n --- Account Details of " << name << " --- \n" << endl; 
      cout << "Account Number: " << accountNumber << endl;
      cout << "Balance: " << balance << endl;
   }

    int fetchBalance(int accountNumber) {
       if(this->accountNumber == accountNumber) {
          return balance;
       }
       return -1;


   }

};

int main() {
    Account a1(12345124, "Subhro Kolay", 10);
    a1.display();
    a1.depositeMoney(1000);
    a1.withDraw(1010);

    cout << "Balance: " << a1.fetchBalance(12345124) << endl;

}