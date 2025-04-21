#include <iostream>
using namespace std;

int main() {
    float marks[100];
    int n = 0, choice;
    float total, highest, lowest;

    do {
        cout << "\n1. Enter Marks\n2. Average\n3. Highest & Lowest\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of students: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Enter marks for student " << i + 1 << ": ";
                    cin >> marks[i];
                }
                break;
            case 2:
                total = 0;
                for (int i = 0; i < n; i++) {
                    total += marks[i];
                }
                cout << "Average Marks: " << total / n << endl;
                break;
            case 3:
                highest = lowest = marks[0];
                for (int i = 1; i < n; i++) {
                    if (marks[i] > highest) highest = marks[i];
                    if (marks[i] < lowest) lowest = marks[i];
                }
                cout << "Highest: " << highest << ", Lowest: " << lowest << endl;
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
