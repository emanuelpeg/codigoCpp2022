#ifndef A_H
#define A_H
#include "tag.h"

class A : public Tag
{
private:
    char * txt;
    char * href;
public:
    A(char * txt, char * href);
    char * show();
};

#endif // A_H
