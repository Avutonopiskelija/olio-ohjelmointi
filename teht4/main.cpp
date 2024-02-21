#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
   Asunto asunto;

   asunto.maarita();

   Kerros kerros;
   kerros.maaritaAsunnot();

    Katutaso katutaso;
    katutaso.maaritaAsunnot();

    return 0;
}
