#pragma once
#include <string>
#include<iostream>
using namespace std;

class Rating
{
private:
    string rating_name;

public:
    Rating(string name);                            // ⁡⁣⁢⁣constructor initializes the rating name⁡
    string get_rating_name() const;                 // ⁡⁣⁢⁣function to get the rating name⁡
    void save_rating(const string &filename) const; // ⁡⁣⁢⁣function to save the rating to a file ⁡
    virtual void generate_rating();             // ⁡⁣⁢⁣virtual function to generate the rating ⁡
};
