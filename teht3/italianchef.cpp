#include "italianchef.h"

ItalianChef::ItalianChef(const string& chefName) : chef(chefName) {}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta." << endl;
}

string ItalianChef::getName() {
    return name;
}
