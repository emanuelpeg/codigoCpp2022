#include "tag.h"

Tag::Tag()
{

}

int Tag::count(char * palabra) {
    int i = 0;
    while(palabra[i] != '\0') {
        i++;
    }
    i++;
    return i;
}
