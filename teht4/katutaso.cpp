#include "katutaso.h"

#include <iostream>

Katutaso::Katutaso()
{
    cout << "Katutaso luotu " << endl;
}

void Katutaso::maaritaAsunnot(int asukasMaara1, int nelio1,
                              int asukasMaara2, int nelio2);
{

    cout << "Maaritetaan katutason asunnot 2kpl"<< endl;

    a1.maarita(int asukasMaara1,int nelio1);
    a2.maarita(int asukasMaara2, int nelio2);

}
