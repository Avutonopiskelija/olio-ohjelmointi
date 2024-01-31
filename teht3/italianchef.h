#include <string>
#include <iostream>
#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H
#include "chef.h"

using namespace std;


class ItalianChef: public chef
{
private:
    int vesi;
    int jauho;

public:
    ItalianChef(const string& chefName,int vesiMaara,int jauhoMaara);

    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
