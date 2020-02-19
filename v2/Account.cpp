#include <iostream>
using namespace std;
#pragma once

class Account
{
private:
    string accType;
    int balance;

public:
    void addBalance(int amt);
    void removeBalance(int amt);
    int getBalance();
    Account(char type);
    Account();
};

Account::Account(char type)
{
    balance = 0;

    if (type == 's')
    {
        accType = "saving";
    }
    else if (type == 'c')
    {
        accType = "chequing";
    }
    else
    {
    }
};

Account::Account()
{
}