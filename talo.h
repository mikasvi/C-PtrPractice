#ifndef TALO_H
#define TALO_H
#include <iostream>
using namespace std;

#include "asunto.h"
class talo
{
public:
    talo();
    ~talo();


private:
    //asunto asuntoPinosta;
    asunto * asunto_ptr;
};

#endif // TALO_H
