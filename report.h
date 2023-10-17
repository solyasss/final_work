#pragma once
#include <string>
#include<iostream>
using namespace std;

class Report
{
protected:
    string date_begin;
    string date_end;

public:
    Report(string begin, string end);               // ⁡⁣⁢⁣constructor to initialize the report with begin and end dates⁡
    string get_begin_date() const;                  // ⁡⁣⁢⁣getter method to retrieve the begin date⁡
    string get_end_date() const;                    // ⁡⁣⁢⁣getter method to retrieve the end date⁡
    void save_report(const string &filename) const; // ⁡⁣⁢⁣save the report to a file ⁡
    virtual void generate_report() = 0;             // ⁡⁣⁢⁣virtual function to generate the report⁡
};
