#ifndef B_H
#define B_H
#include <iostream>
#include "a.h"

using namespace std;

//aliluokka
class B: public A
{
public:
    B();
    ~B();

    void public_B();
    virtual void public_A() override;
};

#endif // B_H
