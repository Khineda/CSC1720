#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }
};

class Customer {
private:
    string name;
    BankAccount account;
    double depositAmount;
public:
    Customer(const string& name, double initialBalance) : name(name), account(initialBalance) {}

    void displayInfo() const {
        cout << "Customer: " << name << endl;
        cout << "Balance: $" << account.getBalance() << endl;
    }

    void makeDeposit() {
        cout << "Set deposit amount:";
        cin >> depositAmount;
        cout << endl;
        account.deposit(depositAmount);
    }

    void makeWithdrawal(double amount) {
        account.withdraw(amount);
    }
};

int main() {
    

    Customer john("John Smith", 1000);
    john.displayInfo();

    john.makeDeposit();
    john.displayInfo();

    john.makeWithdrawal(2000); // Will print "Insufficient funds!"
    john.displayInfo();

    return 0;
}