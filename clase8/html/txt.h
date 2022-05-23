#ifndef TXT_H
#define TXT_H
#include "tag.h"

class TXT : public Tag
{
private:
    char * txt;
public:
    TXT(char * txt);
    char * show();
};

#endif // TXT_H
