#include "category_rating.h"
#include "transaction.h"
#include <iostream>
#include <vector>
using namespace std;

category_rating::category_rating(string name) : Rating(name) {}

void category_rating::generate_rating(const vector<Transaction> &transactions, string period)
{
    cout << "Generating category rating for " << period << ": " << get_rating_name() << endl;

    vector<string> category_names;
    vector<double> category_sums;

    for (size_t i = 0; i < transactions.size(); i++)
    {
        const Transaction &transaction = transactions[i];
        if (transaction.get_date() == period)
        {
            bool found = false;
            for (size_t j = 0; j < category_names.size(); j++)
            {
                if (category_names[j] == transaction.get_category())
                {
                    category_sums[j] += transaction.get_amount();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                category_names.push_back(transaction.get_category());
                category_sums.push_back(transaction.get_amount());
            }
        }
    }

    vector<string> top_three_category_names;
    vector<double> top_three_category_sums;
    for (size_t i = 0; i < category_names.size(); i++)
    {
        bool inserted = false;
        for (size_t j = 0; j < top_three_category_names.size(); j++)
        {
            if (category_sums[i] > top_three_category_sums[j])
            {
                top_three_category_names.insert(top_three_category_names.begin() + j, category_names[i]);
                top_three_category_sums.insert(top_three_category_sums.begin() + j, category_sums[i]);
                inserted = true;
                break;
            }
        }
        if (!inserted && top_three_category_names.size() < 3)
        {
            top_three_category_names.push_back(category_names[i]);
            top_three_category_sums.push_back(category_sums[i]);
        }
        else if (top_three_category_names.size() > 3)
        {
            top_three_category_names.pop_back();
            top_three_category_sums.pop_back();
        }
    }

    for (size_t i = 0; i < top_three_category_names.size(); i++)
    {
        cout << "Here is your rank  " << (i + 1) << ": " << top_three_category_names[i] << " -" << top_three_category_sums[i] << endl;
    }
}
