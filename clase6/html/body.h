#ifndef BODY_H
#define BODY_H
#include "tag.h"
#include <iostream>

class BODY
{
private:
    PTag * tags;
    int cant = 0;
public:
    BODY();
    void add(Tag * tag);
    friend std::ostream& operator<<(std::ostream& os, const BODY& obj);
};
#endif // BODY_H
