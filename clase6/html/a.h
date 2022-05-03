#ifndef A_H
#define A_H
#include "tag.h"

class A : public Tag
{
private:
    char * texto;
    char * url;
public:
    A(char * texto, char * url);
    char * imprimir();
};

#endif // A_H
