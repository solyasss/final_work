#pragma once
#include "report.h"
#include <iostream>
using namespace std;

class weekly_report : public Report
{
private:
    double current_week_balance;
    double previous_week_balance;

public:
    weekly_report(string begin, string end);
    void set_current_week(double balance);
    void set_previous_week(double balance);
    void generate_report();
};
