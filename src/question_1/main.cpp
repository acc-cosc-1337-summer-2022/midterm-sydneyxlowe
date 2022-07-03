#include "question1.h"

using std::cout;
using std::cin;

int main()
{
    auto choice = 'y';
    do
    {
        int sold;
        cout<<"Please enter widgets sold: ";
        cin>>sold;

        if(sold < 0)
        {
            cout<<"Invalid amount entered"<<"/n";
        }

        else
        {
            int points = get_earned_points(sold);
            cout<<"Points earned: "<<points<<"\n";
        }

        cout<<"Enter y or Y to calculate more points: ";
        cin>>choice;

    }while(choice == 'y' || choice == 'Y');
    return 0;
}