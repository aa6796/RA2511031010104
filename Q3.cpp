#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accNo;
    string accHolder;

public:
    void getAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Account Holder Name: ";
        cin >> accHolder;
    }

    void displayAccount() {
        cout << "\nAccount Number: " << accNo;
        cout << "\nAccount Holder: " << accHolder;
    }
};

class SavingsAccount : public BankAccount {
    float balance, interest;

public:
    void getSavings() {
        getAccount();
        cout << "Enter Balance: ";
        cin >> balance;

        interest = balance * 0.05; // 5% interest
    }

    void displaySavings() {
        displayAccount();
        cout << "\nBalance: " << balance;
        cout << "\nInterest: " << interest;
    }
};

int main() {
    SavingsAccount s;
    s.getSavings();
    s.displaySavings();
    return 0;
}