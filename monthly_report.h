#pragma once
#include "report.h"
#include <iostream>
using namespace std;

class monthly_report : public Report
{
private:
    double current_month_balance;
    double previous_month_balance;

public:
    monthly_report(string begin, string end);
    void set_current_month(double balance);
    void set_previous_month(double balance);
    void generate_report();
};
