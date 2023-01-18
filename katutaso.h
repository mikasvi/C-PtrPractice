#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include "asunto.h"

class katutaso : public kerros
{
public:
    katutaso();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);

    asunto as1;
    asunto * as1ptr = &as1;
    asunto as2;
    asunto * as2ptr = &as2;
};

#endif // KATUTASO_H
