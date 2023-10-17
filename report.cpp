#include "report.h"
#include <iostream>
#include <fstream>
using namespace std;

// ⁡⁣⁢⁣constructor initializes the date_begin and date_end member variables ⁡
Report::Report(string begin, string end) : date_begin(begin), date_end(end) {}

string Report::get_begin_date() const
{
    return date_begin;
}

string Report::get_end_date() const
{
    return date_end;
}

void Report::save_report(const string &filename) const
{
    ofstream file(filename);
    if (file.is_open())
    {
        file << " Your report from " << date_begin << " to " << date_end << endl;
        file.close();
    }
    else
    {
        cout << "Can not open the file" << endl;
    }
}