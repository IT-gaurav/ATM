#include <iostream>
using namespace std;
#include "User.cpp"
#include "main.cpp"

class Bank
{

public:
    void displayMenu();
    int readInput(string str);
    void selectOption(int choice);
};

void Bank::displayMenu()
{
    cout << "NEW BANK OF CANADA\n\n";
    cout << "1. Login\n";
    cout << "2. Create Account\n";
    cout << "3. Exit\n";
}

int Bank::readInput(string str)
{
    int choice;
    cout << str;
    cin >> choice;
}

void Bank ::selectOption(int choice)
{
    switch (choice)
    {
    case 1:
        *user1.login();
        break;

    default:
        break;
    }
}