#include "question2.h"
using std::cout;
using std::cin;
using std::vector;


vector<double> get_cookie_ingredients(vector<double> &ing, int cookie)
{
    for (auto &i : ing)
    {
        i *= cookie * 1.0/48.0;
    }
    return ing;
}



bool test_config()
{
    return true;
}