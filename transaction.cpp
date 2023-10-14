#include "transaction.h"
#include "wallet.h"
#include <iostream>
using namespace std;

Transaction::Transaction(double amount, string date_of_transaction, string category_of_transaction, Wallet *wallet)
    : amount(amount), date_of_transaction(date_of_transaction), category_of_transaction(category_of_transaction), wallet(wallet) {}
