#pragma once
#include <string>
using namespace std;

class Report
{
protected:
    string date_begin;
    string date_end;

public:
    Report(string begin, string end);
    string get_begin_date() const;
    string get_end_date() const;
    virtual void generate_report() = 0;
};
