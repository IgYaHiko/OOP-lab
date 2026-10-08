#include<iostream>
using namespace std;

class Library {
private:
    static int bookId;
    static int totalbook;
public:
    
    string title;
    string author;
    double price;

    void setBook(string title, string author, double price) {
        bookId ++;
        totalbook++;
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
        cout << "Book Count: " << totalbook << endl;
    }

};

int Library::bookId = 0;
int Library::totalbook = 0;

int main() {
    Library b1, b2, b3;
    b1.setBook("Game of throns", "Subhro", 100.00);
    b2.setBook("Mathematics", "Rohan", 400);
    b3.setBook("Java with John", "John", 900);

    b1.display();
    b2.display();
    b3.display();


    


}