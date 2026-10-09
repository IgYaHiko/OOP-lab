#include<iostream>
using namespace std;

class Product {
public:
    string name;
    double price;
    Product(string name, double price) {
        this->name = name;
        this->price = price;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }

    ~Product() {
        cout << "Objected deleted" << endl;
    };
};

int main() {    
   Product p("Iphone 18", 100000.0);
   p.display();

}