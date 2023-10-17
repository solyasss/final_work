#include "wallet.h"
#include<iostream>
using namespace std;

Wallet::Wallet(string name) : wallet_name(name), balance(0.0) {}

void Wallet::deposit(double amount) // ⁡⁣⁢⁣increases the wallet's balance by the specified amount⁡
{
    balance += amount;
}

void Wallet::withdraw(double amount)
{
    if (balance >= amount) // ⁡⁣⁢⁡⁣⁢⁣ decreases the wallet's balance by the specified amount⁡
    {
        balance -= amount;
    }
}

double Wallet::get_balance() const
{ // ⁡⁣⁢⁣retrieves the current balance of the wallet⁡
    return balance;
}
