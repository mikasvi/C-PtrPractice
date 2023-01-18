#include "asunto.h"
#include <iostream>
using namespace std;
asunto::asunto()
{
    cout<<"asunto luotu"<<endl;

}

void asunto::maarita(int a, int n)
{
    *ptrAM = a;
    *ptrNeliot = n;
    cout<<"asunto maaritetty, asukkaita on " << *ptrAM <<" nelioita on "<< *ptrNeliot <<endl;
}


double asunto::laskeKulutus(double p)
{
    return *ptrAM**ptrNeliot*p;
}
