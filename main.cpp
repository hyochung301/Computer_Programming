#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(int accNum, std::string accHolderName, double bal) {
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
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    void DisplayAccountDetails() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder's Name: " << accountHolderName << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }

    void Transfer(BankAccount& toAccount, double amount) {
        if (balance >= amount) {
            Withdraw(amount);
            toAccount.Deposit(amount);
        } else {
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    void CalculateInterest(int years) {
        double interestRate = 0.03;
        double interest = balance * interestRate * years;
        balance += interest;
    }
};

int main() {
    BankAccount alice(1, "Alice", 1000);
    BankAccount bob(2, "Bob", 500);

    alice.Deposit(200);
    bob.Withdraw(100);

    alice.DisplayAccountDetails();
    bob.DisplayAccountDetails();

    alice.Transfer(bob, 300);

    alice.CalculateInterest(5);
    bob.CalculateInterest(5);

    alice.DisplayAccountDetails();
    bob.DisplayAccountDetails();

    return 0;
}