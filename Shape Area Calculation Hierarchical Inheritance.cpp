#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual void printData() = 0;
    virtual float area() = 0;
};

class Rectangle : public Shape {
    float length, width;
public:
    void getData() override {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }
    void printData() override {
        cout << "Rectangle - Length: " << length << ", Width: " << width << endl;
    }
    float area() override {
        return length * width;
    }
};

class Circle : public Shape {
    float radius;
public:
    void getData() override {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }
    void printData() override {
        cout << "Circle - Radius: " << radius << endl;
    }
    float area() override {
        return 3.1416f * radius * radius;
    }
};

int main() {
    Rectangle rect;
    Circle cir;

    rect.getData();
    rect.printData();
    cout << "Area of Rectangle: " << rect.area() << endl;

    cir.getData();
    cir.printData();
    cout << "Area of Circle: " << cir.area() << endl;

    return 0;
}
