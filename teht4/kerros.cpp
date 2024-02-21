#include "kerros.h"
#include <iostream>

using namespace std;

Kerros::Kerros()
{
    cout << "Kerros luotu " << endl;

}

void Kerros::maaritaAsunnot(int asukasMaara1, int nelio1, int asukasMaara2, int nelio2,
                            int asukasMaara3, int nelio3, int asukasMaara4, int nelio4)
{

     cout << "Maaritetaan kerroksen asunnot 4kpl "  << endl;

     a1.maarita(asukasMaara1, nelio1);
     a2.maarita(asukasMaara2, nelio2);
     a3.maarita(asukasMaara3, nelio3);
     a4.maarita(asukasMaara4, nelio4);
}

void Kerros::laskeKulutus(double hintaPerNelio);

 double kokonaisKulutus = a1.laskeKulutus(hintaPerNelio)+a2.laskeKulutus(hintaPerNelio)+
                          a3.laskeKulutus(hintaPerNelio)+a4.laskeKulutus(hintaPerNelio);

