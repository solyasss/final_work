#include "rating.h"
#include <iostream>
#include <fstream>
using namespace std;

// ⁡⁣⁢⁣constructor initializes the rating object with a provided name⁡
Rating::Rating(string name) : rating_name(name) {}

string Rating::get_rating_name() const
{
    return rating_name;
}

void Rating::save_rating(const string &filename) const
{
    ofstream file(filename);
    if (file.is_open())
    {
        file << "Your rating: " << rating_name << endl;
        file.close();
    }
    else
    {
        cout << "Can not open the file" << endl;
    }
}

void Rating::generate_rating()
{

}