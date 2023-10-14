#pragma once
#include "rating.h"
#include "transaction.h"
#include <iostream>
#include <vector>
using namespace std;

class category_rating : public Rating
{
public:
    category_rating(string name);
    void generate_rating(const vector<Transaction> &transactions, string period);
};
