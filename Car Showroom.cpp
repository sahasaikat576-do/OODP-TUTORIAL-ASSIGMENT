#include <iostream>
using namespace std;

class Car {
    string brand;
    string model;
    int year;
    static int totalCars;

public:
    // Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        totalCars++;
    }

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    static void showTotalCars() {
        cout << "Total Cars: " << totalCars << endl;
    }
};

// Define static member
int Car::totalCars = 0;

int main() {
    Car car1("Toyota", "Camry", 2022);
    Car car2("Honda", "Civic", 2023);

    car1.display();
    car2.display();

    Car::showTotalCars();

    return 0;
}
