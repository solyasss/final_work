#include "rating.h"
#include <iostream>
#include <fstream>
using namespace std;

Rating::Rating(string name) : rating_name(name) {}

string Rating::get_rating_name() const
{
    return rating_name;
}
