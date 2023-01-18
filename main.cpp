#include <iostream>
using namespace std;

//#include "talo.h"
//#include "katutaso.h"
//#include "kerros.h"
#include <kerrostalo.h>
int main()
{
    //asunto yksi;
    //katutaso kaksi;
    //kerrostalo kolme;
    kerrostalo * kolmeptr;
    kolmeptr = new kerrostalo();

    kolmeptr->maaritaAsunnot();

    double kulutus = kolmeptr->laskeKulutus(1);

    cout << "kerrostalon kulutus = " << kulutus <<endl;
    return 0;
}
