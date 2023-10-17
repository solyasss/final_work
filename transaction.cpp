#include "transaction.h"
#include "wallet.h"
#include <iostream>
using namespace std;

// ⁡⁣⁢⁣constructor to initialize a transaction⁡
Transaction::Transaction(double amount, string date_of_transaction, string category_of_transaction, Wallet *wallet)
    : amount(amount), date_of_transaction(date_of_transaction), category_of_transaction(category_of_transaction), wallet(wallet) {}

double Transaction::get_amount() const
{
    return amount;
}

string Transaction::get_date() const
{
    return date_of_transaction;
}

string Transaction::get_category() const
{
    return category_of_transaction;
}