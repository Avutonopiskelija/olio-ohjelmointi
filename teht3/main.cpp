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

    ItalianChef anthonyBourdain("Anthony Bourdain",0,0);
        anthonyBourdain.makeSalad();
        anthonyBourdain.makeSoup();


    ItalianChef mario("Mario", 100, 250);

        cout << "Chef " << mario.getName() << " konstruktori." << endl;
        mario.makePasta(); // Käytä salaisen reseptin ainesmääriä
        cout << "Chef " << mario.getName() << " destruktori." << endl;


    return 0;
}
