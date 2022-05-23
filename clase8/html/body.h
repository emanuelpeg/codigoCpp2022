#ifndef BODY_H
#define BODY_H
#include <iostream>
#include "tag.h"


class BODY
{
private:
   PTag * tags;
   int cant = 0;
public:
    BODY();
    BODY* add(PTag t);
    friend std::ostream& operator<<(std::ostream& os, const BODY& tag);

};

#endif // BODY_H
