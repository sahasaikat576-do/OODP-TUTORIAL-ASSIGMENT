#include <iostream>
using namespace std;

class Student {
    int studentID;
    string name;
    int marks[5];

public:
    void inputDetails() {
        cout << "Enter Student ID: ";
        cin >> studentID;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    float calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++) sum += marks[i];
        return sum / 5.0;
    }

    void displayDetails() {
        cout << "\nID: " << studentID << ", Name: " << name;
        cout << ", Average Marks: " << calculateAverage() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student students[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].inputDetails();
    }

    for (int i = 0; i < n; i++) {
        students[i].displayDetails();
    }

    return 0;
}
