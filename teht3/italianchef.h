#include <string>
#include <iostream>
#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H
#include "chef.h"

using namespace std;


class ItalianChef: public chef
{
public:
    ItalianChef(const string& chefName);

    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
