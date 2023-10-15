#pragma once
#include <string>
using namespace std;

class Wallet;

class Transaction
{
private:
    double amount;
    string date_of_transaction;
    string category_of_transaction;
    Wallet *wallet;

public:
    Transaction() : amount(0.0), date_of_transaction(""), category_of_transaction(""), wallet(nullptr) {}
    Transaction(double amount, string date_of_transaction, string category_of_transaction, Wallet *wallet);
    double get_amount() const;
    string get_date() const;
    string get_category() const;
};
