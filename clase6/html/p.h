#ifndef P_H
#define P_H
#include "tag.h"

class P : public Tag
{
private:
    char * texto;
public:
    P(char * texto);
    char * imprimir();
};

#endif // P_H
