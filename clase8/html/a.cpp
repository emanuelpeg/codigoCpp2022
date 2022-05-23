#include "a.h"

A::A(char * txt, char * href)
{
    this->txt = txt;
    this->href = href;
}


char * A::show()
{
    int cantTxt = count(this->txt);
    int cantHref = count(this->href);
    char * aux = new char[cantTxt + cantHref + 16];
    strcat(aux, "<a href='");
    strcat(aux, this->href);
    strcat(aux, "'>");
    strcat(aux, this->txt);
    strcat(aux, "</a>");
    return aux;
}
