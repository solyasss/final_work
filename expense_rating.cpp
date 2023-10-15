#include "expense_rating.h"
#include <iostream>
using namespace std;

expense_rating::expense_rating(string name) : Rating(name) {}

void expense_rating::generate_rating(const Transaction transactions[], int num_transactions, string period)
{
    cout << "Your expense rating for " << period << ": " << get_rating_name() << endl;

    Expense top_three_expenses[3];

    for (int i = 0; i < num_transactions; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0 || transactions[i].get_amount() > top_three_expenses[j - 1].transaction.get_amount())
            {
                for (int k = 2; k > j; k--)
                {
                    top_three_expenses[k] = top_three_expenses[k - 1];
                }
                top_three_expenses[j].transaction = transactions[i];
                top_three_expenses[j].position = j + 1;
                break;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        const Transaction &transaction = top_three_expenses[i].transaction;
        int position = top_three_expenses[i].position;
        cout << " Your rank " << position << ": " << transaction.get_category() << " : " << transaction.get_amount() << endl;
    }
}
