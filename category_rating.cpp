#include "category_rating.h"
#include "transaction.h"
#include <iostream>
#include <string>
using namespace std;

category_rating::category_rating(string name) : Rating(name) {}

void category_rating::generate_rating(const Transaction transactions[], int num_transactions, string period)
{
    cout << "Your category rating for " << period << ": " << get_rating_name() << endl;

    struct Category
    {
        string name;
        double sum;
    };

    Category category[100];

    int num = 0;

    for (int i = 0; i < num_transactions; i++)
    {
        const Transaction &transaction = transactions[i];
        if (transaction.get_date() == period)
        {
            bool found = false;
            for (int j = 0; j < num; j++)
            {
                if (category[j].name == transaction.get_category())
                {
                    category[j].sum += transaction.get_amount();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                category[num].name = transaction.get_category();
                category[num].sum = transaction.get_amount();
                num++;
            }
        }
    }

    for (int i = 1; i < num; i++)
    {
        Category obj = category[i];
        int j = i - 1;
        while (j >= 0 && category[j].sum < obj.sum)
        {
            category[j + 1] = category[j];
            j--;
        }
        category[j + 1] = obj;
    }

    for (int i = 0; i < 3 && i < num; i++)
    {
        cout << " Your rank " << (i + 1) << ": " << category[i].name << " : " << category[i].sum << endl;
    }
}
