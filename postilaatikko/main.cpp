#include <iostream>
#include "postilaatikko.h"

using namespace std;

int main()
{
    postilaatikko pl1;
    postilaatikko pl2;

    pl1.lisaaPosti(5);
    pl1.otaPosti(1);

    pl2.lisaaPosti(3);
    pl2.otaPosti(1);

    return 0;
}
