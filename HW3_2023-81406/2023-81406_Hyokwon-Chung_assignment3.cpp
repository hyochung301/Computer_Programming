//Assignment#3 Hyokwon Chung (2023-81406) 2023-11-05 Professor Uhm
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string accountHolderName;
    double balance;

    BankAccount(int accNum, string accHolderName, double bal) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = bal;
    }

    void Deposit(double amount) {
        balance += amount;
    }

    void Withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void DisplayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder's Name: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }

    void Transfer(BankAccount& toAccount, double amount) {
        if (balance >= amount) {
            Withdraw(amount);
            toAccount.Deposit(amount);
        } else {
            cout << "Insufficient balance," << endl;
        }
    }

    void CalculateInterest(int years) {
        double interestRate = 0.03;
        double final_balance = balance * pow(1 + interestRate, years);
        balance = final_balance;
    }
};

int main() {
    BankAccount alice_account(12345, "Alice", 1000);
    BankAccount bob_account(54321, "Bob", 500);

    alice_account.Deposit(200);
    bob_account.Withdraw(100);

    cout << alice_account.accountHolderName << "'s Account Details: " << endl;
    alice_account.DisplayAccountDetails();
    cout << endl;
    cout << bob_account.accountHolderName << "'s Account Details: " << endl;
    bob_account.DisplayAccountDetails();
    cout << endl;

    alice_account.Transfer(bob_account, 300);

    cout << "After 5 years of interest:" << endl;
    cout << alice_account.accountHolderName << "'s Final Account Details: " << endl;
    alice_account.CalculateInterest(5);
    alice_account.DisplayAccountDetails();
    cout << endl;
    cout << bob_account.accountHolderName << "'s Final Account Details: " << endl;
    bob_account.CalculateInterest(5);
    bob_account.DisplayAccountDetails();

    return 0;
}