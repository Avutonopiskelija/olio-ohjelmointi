#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto(int asukasMaara, int nelio)
{
    cout << "Asunto luotu" <<endl << "Asukkaita = "<< asukasMaara << " ja nelioita= " << nelio<< endl;
}

double Asunto::maarita(int asukasMaara, int nelio)
{

    double laskeKulutus=(asukasMaara*nelio*hintaPerNelio);

   cout << "Asunnon kulutus kun hinta=1 = " << laskeKulutus << endl;

   return nelio * hintaPerNelio;
}
