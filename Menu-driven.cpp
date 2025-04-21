#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, num, found, i;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Sort\n6. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number to insert: ";
                cin >> arr[n];
                n++;
                break;
            case 2:
                cout << "Enter number to delete: ";
                cin >> num;
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == num) {
                        for (int j = i; j < n - 1; j++)
                            arr[j] = arr[j + 1];
                        n--;
                        found = 1;
                        break;
                    }
                }
                if (found)
                    cout << "Deleted!\n";
                else
                    cout << "Not found!\n";
                break;
            case 3:
                cout << "Enter number to search: ";
                cin >> num;
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == num) {
                        found = 1;
                        break;
                    }
                }
                if (found)
                    cout << "Found!\n";
                else
                    cout << "Not found!\n";
                break;
            case 4:
                cout << "Array: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 5:
                for (i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                cout << "Array sorted!\n";
                break;
            case 6:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
