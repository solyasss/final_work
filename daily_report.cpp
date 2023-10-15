#include "daily_report.h"
#include <iostream>
using namespace std;

daily_report::daily_report(string date) : Report(date, date), start_balance(0.0), final_balance(0.0) {}

void daily_report::generate_report()
{
    cout << "Your daily report:" << get_begin_date() << endl;

    cout << "Start Balance: " << start_balance << endl;
    cout << "Final Balance: " << final_balance << endl;

    cout << " Your transactions for the day:" << endl;
}

void daily_report::add_transaction(const Transaction &transaction)
{
    start_balance += transaction.get_amount();
    final_balance = start_balance;
}
