#ifndef TAG_H
#define TAG_H
#include "string.h"

class Tag
{
protected:
    int count(char * palabra);
public:
    Tag();
    virtual char * show() = 0;
};

typedef Tag* PTag;

#endif // TAG_H
