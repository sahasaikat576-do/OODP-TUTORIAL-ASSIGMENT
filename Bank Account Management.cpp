#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    // Constructor
    BankAccount(int accNum, string name, float bal) {
        accountNumber = accNum;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1001, "John Doe", 5000);
    account.display();
    account.deposit(1000);
    account.withdraw(2000);
    account.withdraw(5000);  // should show error
    account.display();
    return 0;
}
