#pragma once
#include <string>
#include<iostream>
using namespace std;

class Wallet;

class Transaction
{
private:
    double amount;
    string date_of_transaction;
    string category_of_transaction;
    Wallet *wallet; // ⁡⁣⁢⁣pointer to the associated wallet⁡

public:
    Transaction() : amount(0.0), date_of_transaction(""), category_of_transaction(""), wallet(nullptr) {}
    Transaction(double amount, string date_of_transaction, string category_of_transaction, Wallet *wallet);

    double get_amount() const;   // ⁡⁣⁢⁣getter for the transaction amount⁡
    string get_date() const;     // ⁡⁣⁢⁣getter for the transaction date⁡
    string get_category() const; // ⁡⁣⁢⁣getter for the transaction category⁡
};
