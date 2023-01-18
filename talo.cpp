#include "talo.h"

talo::talo()
{
    cout<<"talo konstruktori"<<endl;
    /*asuntoPinosta.maarita(2,100);
    cout<<"asunnon kulutus 1 euron hinnalla = "<< asuntoPinosta.laskeKulutus(1) <<endl;
    */
    asunto_ptr = new asunto();
    asunto_ptr->maarita(2,100);
    cout<<"asunnon kulutus 1 euron hinnalla = "<< asunto_ptr->laskeKulutus(1) <<endl;
}

talo::~talo()
{
    cout <<"talo destruktori"<<endl;
    delete asunto_ptr;
    asunto_ptr = nullptr;
}
