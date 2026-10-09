#include<iostream>
using namespace std;

class Book  {
public:
    string title;
    double price; 

    Book() {
        title = "X";
        price = 0.0;
    }

    Book(string title, double price) {
        this->title = title;
        this->price = price;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1;
    Book b2("Spiderman brand New Day", 100.00);
    
    b1.display();
    b2.display();
    return 0;
}
