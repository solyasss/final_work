#include "daily_report.h"
#include <iostream>
using namespace std;

// ⁡⁣⁢⁣constructor for the daily_report class, initialize the start and final balance to 0⁡
daily_report::daily_report(string date) : Report(date, date), start_balance(0.0), final_balance(0.0) {}

// ⁡⁣⁢⁣method to generate the daily report⁡
void daily_report::generate_report()
{
    cout << "Your daily report:" << get_begin_date() << endl;

    cout << " Balance in the start: " << start_balance << endl;
    cout << " Balance in the end : " << final_balance << endl;

    cout << " Your transactions for the day:" << endl;
}

// ⁡⁣⁢⁣method to add a transaction to the daily report⁡
void daily_report::add_transaction(const Transaction &transaction)
{
    start_balance += transaction.get_amount();
    final_balance = start_balance;
}
