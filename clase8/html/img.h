#ifndef IMG_H
#define IMG_H
#include "tag.h"

class IMG : public Tag
{
private:
    char * src;
public:
    IMG(char * src);
    char * show();
};

#endif // IMG_H
