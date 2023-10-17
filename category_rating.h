#pragma once
#include "rating.h"
#include "transaction.h"
#include <string>
#include <iostream>
using namespace std;

class category_rating : public Rating
{
public:
    category_rating(string name); // ⁡⁣⁢⁣constructor for the category_rating class

    // ⁡⁣⁢⁣method to generate a rating for given transactions and a time period⁡
    void generate_rating(const Transaction transactions[], int num_transactions, string period);
};
