#ifndef P_H
#define P_H
#include "tag.h"

class P : public Tag
{
private:
    PTag * tags;
    int cant = 0;
public:
    P();
    P* add(PTag t);
    char * show();
};

#endif // P_H
