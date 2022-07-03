#include "question1.h"

using std::cout;

int get_earned_points(int sold)
{
    int points;

    if(sold >= 1 && sold <= 5)
    {
        points = 1 * sold;
    }

    else if(sold >= 6 && sold <= 10)
    {
        points = 5 * sold;
    }

    else if(sold >= 11 && sold <= 15)
    {
        points = 10 * sold;
    }

    else if(sold >= 16)
    {
        points = 15 * sold;
    }

    else
    {
        cout<<"invalid number";
    }

    return points;
}


bool test_config()
{
    return true;
}