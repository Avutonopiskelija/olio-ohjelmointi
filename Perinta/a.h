#ifndef A_H
#define A_H
#include <iostream>

using namespace std;


//yliluokka
class A
{
public:
    A();
     ~A();

    virtual void public_A();


protected:
    void protected_A();

private:
    void private_A();
    int A_muuttuja;
};

#endif // A_H
