#include <iostream>
using namespace std;
#include "Account.cpp"

class User
{

private:
    string id, pass, name;
    Account accounts[2];

public:
    void login();
    void logout();
    bool deposite(int amt);
    bool withdraw(int amt);
    void displayinfo();
    User(string Name, string Id, string Pass);
};

User::User(string Name, string Id, string Pass)
{
    name = Name;
    id = Id;
    pass = Pass;
}

void User::login()
{
    cout << "you are logged in";
}