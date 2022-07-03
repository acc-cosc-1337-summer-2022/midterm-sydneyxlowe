#include "question2.h"
using std::cout;
using std::vector;
using std::cin;

int main()
{
    auto choice = 'y';

    do
    {
        int cookie;
        cout<<"Please enter desired amount of cookies: ";
        cin>>cookie;

        vector<double> ing = {1.5, 1, 2.75};
        vector<double> ing2 = get_cookie_ingredients(ing, cookie);

        for(int i=0; i < ing2.size(); i++)
        std::cout << ing2.at(i) << ' ';
    }while(choice == 'y' || choice == 'Y');
    return 0;
}