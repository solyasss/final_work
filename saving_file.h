#pragma once
#include <iostream>
#include <string>
using namespace std;

class Saving
{
public:
    Saving();                                       // ⁡⁣⁢⁣constructor for the saving class⁡
    void save_report(const string &filename) const; // ⁡⁣⁢⁣save a report to a file with the provided filename⁡
    void save_rating(const string &filename) const; // ⁡⁣⁢⁣save a rating to a file with the provided filename⁡
};
