#pragma once
#include <string>
using namespace std;

class Rating
{
private:
    string rating_name;

public:
    Rating(string name);
    string get_rating_name() const;
    virtual void generate_rating() = 0;
};
