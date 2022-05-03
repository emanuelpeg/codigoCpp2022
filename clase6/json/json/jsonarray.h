#ifndef JSONARRAY_H
#define JSONARRAY_H

#include "jsonset.h"

class JsonArray : public JsonSet
{
public:
    JsonArray();
    char* toString();
};

#endif // JSONARRAY_H
