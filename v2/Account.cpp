#include <iostream>
using namespace std;

class Account
{
private:
    int balance;

public:
    void addBalance(int amt);
    void removeBalance(int amt);
    int getBalance();
};