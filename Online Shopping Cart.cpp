#include <iostream>
using namespace std;

class Product {
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void inputDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    float calculateTotalPrice() {
        return price * quantity;
    }

    void productDetails() {
        cout << "\nID: " << productID
             << ", Name: " << productName
             << ", Price: " << price
             << ", Quantity: " << quantity
             << ", Total: " << calculateTotalPrice() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product cart[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for product " << i + 1 << ":\n";
        cart[i].inputDetails();
    }

    cout << "\n--- Cart Details ---\n";
    for (int i = 0; i < n; i++) {
        cart[i].productDetails();
    }

    return 0;
}
