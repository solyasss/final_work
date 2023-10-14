#include "monthly_report.h"
#include <iostream>
using namespace std;

monthly_report::monthly_report(string begin, string end) : Report(begin, end), current_month_balance(0.0), previous_month_balance(0.0) {}

void monthly_report::set_current_month(double balance)
{
    current_month_balance = balance;
}

void monthly_report::set_previous_month(double balance)
{
    previous_month_balance = balance;
}

void monthly_report::generate_report()
{
    cout << "Generating monthly report from " << get_begin_date() << " to " << get_end_date() << endl;

    double balance_difference = current_month_balance - previous_month_balance;

    cout << "Balance difference: " << balance_difference << endl;
}
