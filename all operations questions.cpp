#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // a. Print the number 45.6789 in a field of width 10, right-justified, with three decimal places
    cout << "a. " << setw(10) << fixed << setprecision(3) << 45.6789 << endl;

    // b. Display the number 0.00034567 in scientific notation with six decimal places
    cout << "b. " << scientific << setprecision(6) << 0.00034567 << endl;

    // c. Print the decimal number 255 as a hexadecimal number in uppercase format
    cout << "c. " << uppercase << hex << 255 << endl;

    // Reset formatting for decimal
    cout << dec;

    // d. Print the number 987.654321 as a fixed-point number rounded to four decimal places
    cout << "d. " << fixed << setprecision(4) << 987.654321 << endl;

    // e. Display the number -123.456 as an exponential and with four decimal spaces
    cout << "e. " << scientific << setprecision(4) << -123.456 << endl;

    return 0;
}
