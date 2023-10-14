#include "wallet.h"
using namespace std;

Wallet::Wallet(string name) : wallet_name(name), balance(0.0) {}

void Wallet::deposit(double amount)
{
    balance += amount;
}

void Wallet::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
    }
}

double Wallet::get_balance() const
{
    return balance;
}
