#ifndef KERROS_H
#define KERROS_H
#include <iostream>
#include "asunto.h"


using namespace std;


class Kerros
{
public:
    Kerros();

   void maaritaAsunnot(int asukasMaara1,int nelio1,int asukasMaara2,int nelio2,
                      int asukasMaara3,int nelio3,int asukasMaara4,int nelio4);


   void laskeKulutus();
    double laskeKulutus(double hintaPerNelio);
    double hintaPerNelio=1;

private:
    Asunto a1;
    Asunto a2;
    Asunto a3;
    Asunto a4;

};

#endif // KERROS_H
