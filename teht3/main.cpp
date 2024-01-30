#include <iostream>
#include "chef.h"
#include "italianchef.h"


using namespace std;

int main()
{
    chef gordonRamsay("Gordon Ramsay");
        gordonRamsay.makeSalad();
        gordonRamsay.makeSoup();

        cout << endl;

        ItalianChef anthonyBourdain("Anthony Bourdain");
        anthonyBourdain.makeSalad();
        anthonyBourdain.makeSoup();


    return 0;
}
