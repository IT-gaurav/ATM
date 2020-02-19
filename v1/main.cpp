#include <iostream>

using namespace std;

class Bank
{
    char name[100], add[100], choice;
    int balance;

public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};

void Bank ::open_account()
{
    cout << "Enter your full name: ";
    cin.ignore();
    cin.getline(name, 100);

    cout << "Enter your Address: ";
    cin.ignore();
    cin.getline(add, 100);

    cout << "Type of account saving(s)/chequing(c): ";
    cin >> choice;

    cout << "Enter amount for deposite";
    cin >> balance;

    cout << "Your account has been created\n";
};

void Bank ::deposite_money()
{
    int deposite;
    cout << "Enter the amount you want to deposite:";
    cin >> deposite;
    balance += deposite;
    cout << "Amount you deposited : \t" << deposite;
    cout << "Total balance : \t" << balance;
};

void Bank::display_account()
{
    cout << "Your full name: \t" << name;
    cout << "Your address : \t" << add;
    cout << "Type of account opened:\t" << choice;
    cout << "Amount you deposited : \t" << balance;
};

void Bank::withdraw_money()
{
    float withdraw;
    cout << "Enter the amount you withdraw\t";
    cin >> withdraw;
    balance -= withdraw;
    cout << "Remaining balance : " << balance;
};

int main()
{
    Bank bank1;
    int option;
    do
    {
        /* code */

        cout << "1. Open Account\n";
        cout << "2. deposite money\n";
        cout << "3. withdraw money\n";
        cout << "4. Display account\n";
        cout << "5. Exit\n";
        cout << "Select the options from 1-5:\t";
        cin >> option;
    } while (option < 1 && option > 5);

    switch (option)
    {
    case 1:
        bank1.open_account();
        break;
    case 2:
        bank1.deposite_money();
        break;

    case 3:
        bank1.withdraw_money();
        break;

    case 4:
        bank1.deposite_money();
        break;

    case 5:
        cout << "Thanks for using our ATM";
        break;

    default:
        break;
    }

    return 0;
}