#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;


class Asunto
{
public:
    Asunto(int asukasMaara, int nelio);

    double hintaPerNelio;

    void maarita();
    double laskeKulutus =0.0;
};

#endif // ASUNTO_H
