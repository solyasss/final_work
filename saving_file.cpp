#include "saving_file.h"
#include "report.h"
#include "rating.h"
#include <iostream>
#include <fstream>
using namespace std;

// ⁡⁣⁢⁣save_report method for the report class to save a report to a file.⁡
void Report::save_report(const string &filename) const
{
    ofstream file(filename); // ⁡⁣⁢⁣create an output file stream using the provided filename⁡
    if (file.is_open())      // ⁡⁣⁢⁣check if the file is successfully opened⁡
    {
        file << "Your report from  " << date_begin << " по " << date_end << endl;
        file.close(); // ⁡⁣⁢⁣close the file⁡
    }
    else
    {
        cout << "Cannot open file" << endl;
    }
}

void Rating::save_rating(const string &filename) const // ⁡⁣⁢⁣the same things but for raing saving⁡
{
    ofstream file(filename);
    if (file.is_open())
    {
        file << "Your rating: " << rating_name << endl;
        file.close();
    }
    else
    {
        cout << "Cannot open file" << endl;
    }
}
