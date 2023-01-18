#include "kerrostalo.h"
#include "asunto.h"
#include "katutaso.h"
kerrostalo::kerrostalo()
{
cout << "kerrostalo luotu" <<endl;
}

double kerrostalo::laskeKulutus(double hinta)
{
    double summa = 0;

    summa += ekaptr->laskeKulutus(hinta);
    summa += tokaptr->laskeKulutus(hinta);
    summa += kolmasptr->laskeKulutus(hinta);

    return summa;
}

void kerrostalo::maaritaAsunnot()
{
cout <<"maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    ekaptr->maaritaAsunnot();
    tokaptr->maaritaAsunnot();
    kolmasptr->maaritaAsunnot();
}
