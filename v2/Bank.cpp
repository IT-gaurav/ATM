#include <iostream>
using namespace std;
#include "User.cpp"
#pragma once

class Bank
{

public:
    void displayMenu();
    int readInput(string str);
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

    return choice;
}
