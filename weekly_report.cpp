#include "weekly_report.h"
#include <iostream>
using namespace std;

weekly_report::weekly_report(string begin, string end) : Report(begin, end), current_week_balance(0.0), previous_week_balance(0.0) {}

void weekly_report::set_current_week(double balance)
{
    current_week_balance = balance;
}

void weekly_report::set_previous_week(double balance)
{
    previous_week_balance = balance;
}

void weekly_report::generate_report()
{
    cout << "Generating weekly report from " << get_begin_date() << " to " << get_end_date() << endl;

    double balance_difference = current_week_balance - previous_week_balance;

    cout << "Balance difference: " << balance_difference << endl;
}
