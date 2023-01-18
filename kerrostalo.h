#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "kerrostalo.h"
#include "katutaso.h"
class kerrostalo
{
public:
    kerrostalo();
    double laskeKulutus(double);
    void maaritaAsunnot();
private:
    katutaso eka;
    katutaso * ekaptr = &eka;
    kerros toka;
    kerros * tokaptr = &toka;
    kerros kolmas;
    kerros * kolmasptr = &kolmas;
};

#endif // KERROSTALO_H
