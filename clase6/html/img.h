#ifndef IMG_H
#define IMG_H
#include "tag.h"

class IMG : public Tag
{
private:
    char * url;
public:
    IMG(char * url);
    char * imprimir();
};

#endif // IMG_H
