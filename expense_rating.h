#pragma once
#include "rating.h"
#include "transaction.h"
using namespace std;

struct Expense
{
    Transaction transaction;
    int position;
};

class expense_rating : public Rating
{
public:
    expense_rating(string name);
    void generate_rating(const Transaction transactions[], int num_transactions, string period);
};
