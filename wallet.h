#pragma once
#include <string>
#include<iostream>
using namespace std;

class Wallet
{
private:
    string wallet_name;
    double balance;

public:
    Wallet(string name);
    void deposit(double amount);  //  ⁡⁣⁢⁣method allows depositing funds into the wallet⁡
    void withdraw(double amount); // ⁡⁣⁢⁣method allows withdrawing funds from the wallet⁡
    double get_balance() const;   // ⁡⁣⁢⁣method to show the current wallet balance⁡
};
