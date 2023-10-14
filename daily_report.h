#pragma once
#include "report.h"
#include "transaction.h"
using namespace std;

class daily_report : public Report
{
private:
    double start_balance;
    double final_balance;

public:
    daily_report(string date);
    void generate_report();
    void add_transaction(const Transaction &transaction);
};