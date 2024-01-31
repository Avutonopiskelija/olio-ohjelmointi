#include "italianchef.h"


ItalianChef::ItalianChef(const string& chefName,int vesiMaara, int jauhoMaara) : chef(chefName),vesi(vesiMaara), jauho(jauhoMaara) {}

void ItalianChef::makePasta()
{

    cout << "Chef " << name << " makes pasta with special recipe " <<endl;
    cout << " veden maara= " <<vesi <<
                   " ja jauhojen maara =" << jauho << endl;
    }



string ItalianChef::getName() {
    return name;
}
