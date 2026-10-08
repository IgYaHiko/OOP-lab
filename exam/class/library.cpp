#include<iostream>
using namespace std;

class Library {
private:
    static int bookId;
public:
    string title;
    string author;
    double price;

    void setBook(string title, string author, double price) {
        bookId ++;
        this->title = title;
        this->author = author;
        this->price = price;
    }

    void discount(double dist) {
        if(dist < 0) {
            cout << "non zero element" << endl;
            return;
        }

        double discount = (price * (dist / 100));
        price = price - discount;



    }

    void display() {
        cout << "\n --- Book Details of " << title << " --- \n" << endl; 
        cout << "Author name: " << author << endl;
        cout << "price: " << price << endl;
    }

};

int Library::bookId = 0;

int main() {
    Library b1;
    b1.setBook("Game of throns", "Subhro", 100.00);
    b1.display();

    b1.discount(-10);

    b1.display();
}