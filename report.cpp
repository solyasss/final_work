#include "report.h"
#include <iostream>
#include <fstream>
using namespace std;

Report::Report(string begin, string end) : date_begin(begin), date_end(end) {}

string Report::get_begin_date() const
{
    return date_begin;
}

string Report::get_end_date() const
{
    return date_end;
}

