#include "expense_rating.h"
#include <iostream>
using namespace std;

expense_rating::expense_rating(string name) : Rating(name) {}

void expense_rating::generate_rating(const vector<Transaction> &transactions, string period)
{
    cout << "Generating expense rating for " << period << ": " << get_rating_name() << endl;

    vector<Transaction> top_three_expenses;

    for (const Transaction &transaction : transactions)
    {
        if (top_three_expenses.empty() || transaction.get_amount() > top_three_expenses.back().get_amount())
        {
            top_three_expenses.push_back(transaction);

            for (size_t i = top_three_expenses.size() - 1; i > 0 && top_three_expenses[i].get_amount() > top_three_expenses[i - 1].get_amount(); i--)
            {
                swap(top_three_expenses[i], top_three_expenses[i - 1]);
            }

            if (top_three_expenses.size() > 3)
            {
                top_three_expenses.pop_back();
            }
        }
    }

    for (size_t i = 0; i < top_three_expenses.size(); i++)
    {
        const Transaction &transaction = top_three_expenses[i];
        cout << "Here is your rank " << (i + 1) << ": " << transaction.get_category() << " -" << transaction.get_amount() << endl;
    }
}