#pragma once
#include "rating.h"
#include "transaction.h"
#include<iostream>
using namespace std;

struct Expense
{
    Transaction transaction; // ⁡⁣⁢⁣structure used to pair each transaction with its position for ranking⁡
    int position;
};

class expense_rating : public Rating
{
public:
    expense_rating(string name);
    // ⁡⁣⁢⁣calculates and ranks expenses within the provided array of transactions for the specified time period⁡
    void generate_rating(const Transaction transactions[], int num_transactions, string period);
};
