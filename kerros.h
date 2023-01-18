#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class kerros
{
public:
    kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);

    asunto as1;
    asunto * as1ptr = &as1;
    asunto as2;
    asunto * as2ptr = &as2;
    asunto as3;
    asunto * as3ptr = &as3;
    asunto as4;
    asunto * as4ptr = &as4;
};

#endif // KERROS_H
