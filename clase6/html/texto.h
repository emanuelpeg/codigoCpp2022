#ifndef TEXTO_H
#define TEXTO_H
#include "tag.h"

class Texto : public Tag
{
private:
    char * texto;
public:
    Texto(char * texto);
    char * imprimir();
};

#endif // TEXTO_H
