/*
create acc
login
deposite
withdrawl
logout
display info


*/

#include <iostream>
#include "User.cpp"
#include "Bank.cpp"

using namespace std;

int main()
{

    User *user1 = new User("gaurav", "1111", "0000");
    User *user2 = new User("roneet", "2222", "0101");

    Bank bank;

    bank.displayMenu();
    int choice = bank.readInput("SELECT : ");

    
    return 0;
}