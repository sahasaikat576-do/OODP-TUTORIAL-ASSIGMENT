#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp >= 80)
        cout << "swimming" << endl;
    else if (temp >= 60)
        cout << "tennis" << endl;
    else if (temp >= 40)
        cout << "golf" << endl;
    else
        cout << "skiing" << endl;

    return 0;
}
