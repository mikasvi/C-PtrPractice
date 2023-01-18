#include "kerros.h"

kerros::kerros()
{
    cout<<"kerros luotu"<<endl;
}

void kerros::maaritaAsunnot()
{
    cout << "maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1ptr->maarita(2, 100);
    as2ptr->maarita(2, 100);
    as3ptr->maarita(2, 100);
    as4ptr->maarita(2, 100);
}

double kerros::laskeKulutus(double hinta)
{
    double summa = 0;
    summa += as1ptr->laskeKulutus(hinta);
    summa += as2ptr->laskeKulutus(hinta);
    summa += as3ptr->laskeKulutus(hinta);
    summa += as4ptr->laskeKulutus(hinta);
    return summa;
}
