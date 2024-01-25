#include "postilaatikko.h"

postilaatikko::postilaatikko()
{
   cout << "Luodaan postilaatikko" << endl;
   maara = 0;
}

void postilaatikko::lisaaPosti(int m)
{
    cout << "Lisataan postia " << m << endl;
    maara = m;
    cout << "maara on " << maara << endl;
}

void postilaatikko::otaPosti(int m)
{
    cout << "otetaan postia " << m << endl;
    maara = maara-m;
    cout << "maara on " << maara << endl;
}

void postilaatikko::asetaNimi(string n)
{
    cout << "ollaan asetaNimi";
}
