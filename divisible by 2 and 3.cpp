#include <iostream>
using namespace std;

int main() {
    int num;

    while (true) {
        cout << "Enter a number: ";
        cin >> num;

        cout << "Cube of " << num << " is: " << (num * num * num) << endl;

        if (num % 2 == 0 && num % 3 == 0) {
            cout << "EXIT" << endl;
            break;
        }
    }

    return 0;
}
