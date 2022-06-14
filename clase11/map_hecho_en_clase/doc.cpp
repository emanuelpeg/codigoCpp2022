#include "doc.h"

Doc::Doc()
{

}

Doc::Doc(char tipo, long nro)
{
    this->tipo = tipo;
    this->nro = nro;
}

bool Doc::operator==(Doc otro)
{
    return this->nro == otro.nro && this->tipo == otro.tipo;
}
