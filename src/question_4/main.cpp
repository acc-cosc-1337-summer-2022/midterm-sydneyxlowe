#include "question4.h"
using std::cout;
using std::cin;

int main()
{
    auto choice = 'y';

    do
    {
        double C;
        cout<<"Please enter temperature in degrees Celcius: ";
        cin>>C;

        double F = get_fahrenheit(C);

        cout<<"The temperature in degrees Fahrenheit is "<<F<<"\n";
        cout<<"Would you like to calculate more temperatures? Enter 'y' or 'Y' for yes: ";
        cin>>choice;

    }while(choice == 'y' || choice == 'Y');
    return 0;
}