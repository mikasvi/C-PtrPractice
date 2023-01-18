#include "katutaso.h"
#include "asunto.h"
#include "kerros.h"
katutaso::katutaso()
{
    cout<<"katutaso luotu"<<endl;

}

void katutaso::maaritaAsunnot()
{
    cout<< "maaritetaan 2kpl katutason asuntoja" << endl;
    as1ptr->maarita(2, 100);
    as2ptr->maarita(2,100);
    kerros::maaritaAsunnot();
}

double katutaso::laskeKulutus(double hinta)
{
   double summa = 0;
   summa += as1ptr->laskeKulutus(hinta);
   summa += as2ptr->laskeKulutus(hinta);
   summa += kerros::laskeKulutus(hinta);
   return summa;
}
