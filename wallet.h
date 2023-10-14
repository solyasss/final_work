#pragma once
#include <string>
using namespace std;

class Wallet
{
private:
    string wallet_name;
    double balance;

public:
    Wallet(string name);
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance() const;
};
