#pragma once
#include "report.h"
using namespace std;

class DailyReport : public Report
{
public:
    DailyReport(string date);
    void generate_report();
};

