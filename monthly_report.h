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
    monthly_report(string begin, string end); // ⁡⁣⁢⁣initializes the monthly report with a start and end date⁡
    void set_current_month(double balance);   // ⁡⁣⁢⁣sets the balance for the current month⁡
    void set_previous_month(double balance);  // ⁡⁣⁢⁣sets the balance for the previous month⁡
    void generate_report();                   // ⁡⁣⁢⁣generates the monthly report, including balance information for both months⁡
};
