#include "body.h"

BODY::BODY()
{

}

void BODY::add(Tag * tag) {
    PTag * aux = new PTag[this->cant + 1];
    for (int i = 0; i < this->cant; i++) {
        aux[i] = this->tags[i];
    }
    aux[this->cant] = tag;
    delete [] tags;
    this->tags = aux;
    this->cant++;
}

std::ostream& operator<<(std::ostream& os, const BODY& obj) {
    os << "<BODY>" << std::endl;
    for (int i = 0; i < obj.cant; i++) {
        os << obj.tags[i]->imprimir();
        os << std::endl;
    }
    os << "</BODY>" << std::endl;
    return os;
}
