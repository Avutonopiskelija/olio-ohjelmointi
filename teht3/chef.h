#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>

using namespace std;


class chef
{
public:
    chef(const std::string& chefName);

    void makeSalad();
    void makeSoup ();

    ~chef();
protected:

    string name;
};

#endif // CHEF_H
