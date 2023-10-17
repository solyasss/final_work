#include "report.h"
#include <iostream>
using namespace std;

class weekly_report : public Report
{
private:
    double current_week_balance;  // ⁡⁣⁢⁣stores the current week balance⁡
    double previous_week_balance; // ⁡⁣⁢⁣stores the previous week balance⁡

public:
    weekly_report(string begin, string end); // ⁡⁣⁢⁣constructor for the weekly_report class⁡
    void set_current_week(double balance);   // ⁡⁣⁢⁣set the current week balance⁡
    void set_previous_week(double balance);  // ⁡⁣⁢⁣set the previous week balance⁡
    void generate_report();                  // ⁡⁣⁢⁣generate the weekly report⁡
};
