#include <iostream>
using namespace std;

class LibraryAccount {
    int availableBooks;

public:
    LibraryAccount(int books) {
        availableBooks = books;
    }

    void issueBook(int amount) {
        try {
            if (amount > availableBooks || amount < 0) {
                throw amount;
            }

            availableBooks -= amount;

            cout << "Books issued successfully." << endl;
            cout << "Remaining books: " << availableBooks << endl;
        }
        catch (int x) {
            cout << "Error: Invalid issue amount or insufficient books." << endl;
        }
    }
};

int main() {
    LibraryAccount account(10);

    int amount;

    cout << "Enter number of books to issue: ";
    cin >> amount;

    account.issueBook(amount);

    return 0;
}