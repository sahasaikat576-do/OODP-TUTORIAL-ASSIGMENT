#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    char slash;

    cout << "Enter first fraction: ";
    cin >> a >> slash >> b;

    cout << "Enter second fraction: ";
    cin >> c >> slash >> d;

    int numerator = a * c;
    int denominator = b * d;

    cout << "Product = " << numerator << "/" << denominator << endl;

    return 0;
}
