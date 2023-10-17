#pragma once
#include "report.h"
#include "transaction.h"
#include<iostream>
using namespace std;

class daily_report : public Report
{
private:
    double start_balance; // ⁡⁣⁢⁣store the initial balance for the day⁡
    double final_balance; // ⁡⁣⁢⁣store the end balance for the day⁡

public:
    daily_report(string date);                            // ⁡⁣⁢⁣constructor for the daily_report class that takes the date as an argument⁡
    void generate_report();                               // ⁡⁣⁢⁣method to generate the daily report⁡
    void add_transaction(const Transaction &transaction); // ⁡⁣⁢⁣method to add a transaction to the daily report⁡
};