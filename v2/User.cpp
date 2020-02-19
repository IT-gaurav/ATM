#include <iostream>
using namespace std;
#include "Account.cpp"
#pragma once

class User
{

private:
    string id, pass, name;
    Account accounts[2];

public:
    void login();
    void createAccount();
    void logout();
    bool deposite(int amt);
    bool withdraw(int amt);
    void displayinfo();
    void selectOption(int choice);
    User(string Name, string Id, string Pass);
};

User::User(string Name, string Id, string Pass)
{
    name = Name;
    id = Id;
    pass = Pass;
};

void User::login()
{
    cout << "you are logged in";
};

void User ::selectOption(int choice)
{
    switch (choice)
    {
    case 1:
        login();
        break;

    case 2:
        createAccount();
        break;

    case 3:
        cout << "Thanks for using NEW BANK OF CANADA";
        break;

    default:
        break;
    }
};

void User::createAccount()
{
    char ch, ch1;
    cout << "Enter the type of account you want to create saving(s) or checquing(c):\t";
    cin >> ch;
    Account *account1 = new Account(ch);
    cout << "Do you want to add another account to your ptofile (y/n):\t";
    cin >> ch1;

    if (ch1 == 'y')
    {
        /* code */
    }
};