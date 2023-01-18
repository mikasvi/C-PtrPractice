#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class asunto
{
public:
    asunto();
    void maarita(int,int);
    double laskeKulutus(double);
    int asukasmaara;
    int * ptrAM = &asukasmaara;
    int neliot;
    int * ptrNeliot = &neliot;
};

#endif // ASUNTO_H
