#pragma once
#include "rating.h"
#include "transaction.h"
#include <vector>
#include <iostream>
using namespace std;

class expense_rating : public Rating
{
public:
    expense_rating(string name);
    void generate_rating(const vector<Transaction> &transactions, string period);
};
