#include "transaction.h"
#include "wallet.h"
#include "report.h"
#include "rating.h"
#include "daily_report.h"
#include "weekly_report.h"
#include "monthly_report.h"
#include "expense_rating.h"
#include "category_rating.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Wallet personal_wallet("Wallet");

    personal_wallet.deposit(15000.0);

    Transaction n1(6000.0, "12.10.23", "Food", &personal_wallet);
    Transaction n2(4000.0, "12.10.23", "Clothes", &personal_wallet);
    Transaction n3(2000.0, "12.10.23", "Medicine", &personal_wallet);

    daily_report daily("12.10.23");
    weekly_report weekly("1.09.23", "7.09.23");
    monthly_report monthly("12.09.23", "12.10.23");

    expense_rating expense_rating("Expense rating");
    category_rating category_rating("Category rating");

    double amount;
    string date, category;
    Transaction new_transaction(0.0, "", "", &personal_wallet);

    Transaction transactions[3] = {n1, n2, n3};

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1. Add transactions" << endl;
        cout << "2. Generate reports" << endl;
        cout << "3. Generate ratings" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter transaction details:" << endl;
            cout << "Amount: ";
            cin >> amount;
            cout << "Date: ";
            cin >> date;
            cout << "Category: ";
            cin >> category;
            new_transaction = Transaction(amount, date, category, &personal_wallet);
            break;
        case 2:
            daily.generate_report();
            weekly.generate_report();
            monthly.generate_report();
            break;
        case 3:
            expense_rating.generate_rating(transactions, 3, "12.10.23");
            category_rating.generate_rating(transactions, 3, "12.10.23");
            break;
        case 4:
            cout << "Bye" << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
