#include <iostream>
using namespace std;

class Book {
private:
    string name;
    float price;
public:
    Book(string n, float p) : name(n), price(p) {}

    // Declare friend function
    friend void book_price(Book b);
};

class Library {
public:
    void displayBook(Book b) {
        book_price(b); // Access via friend
    }
};

// Friend function definition
void book_price(Book b) {
    cout << "Book: " << b.name << "\nPrice: $" << b.price << endl;
}

int main() {
    Book b1("C++ Fundamentals", 499.50);
    Library lib;
    lib.displayBook(b1);
    return 0;
}
