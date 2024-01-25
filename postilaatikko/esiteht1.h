

#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>

using namespace std;

class myClass
{

public:
   myClass();

   string text;
   void publicFunction(string );



   ~myClass();

private:

   string privateTextToPrint;
   void privateFunction (string);

protected:

    void protectedFunction(string);

};
#endif // MYCLASS_H
