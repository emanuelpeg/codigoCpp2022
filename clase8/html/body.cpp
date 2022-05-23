#include "body.h"

BODY::BODY()
{

}

BODY* BODY::add(PTag t)
{
    PTag * aux = new PTag[this->cant + 1];
    for (int i = 0; i < this->cant; i++) {
        aux[i] = this->tags[i];
    }
    aux[this->cant] = t;
    this->cant++;
    delete [] this->tags;
    this->tags = aux;
    return this;
}

std::ostream& operator<<(std::ostream& os, const BODY& body) {
    os << "<body>"<< std::endl;
    for (int i = 0; i < body.cant; i++) {
        os<< body.tags[i]->show() << std::endl;
    }
    os << "</body>"<< std::endl;
    return os;
}
