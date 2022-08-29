#include "fecha.h"

Fecha::Fecha(int dd, int mm, int yyyy){
    this->dd = dd;
    this->mm = mm;
    this->yyyy = yyyy;
}

bool operator== (const Fecha& unaFecha, const Fecha& otraFecha){
    return (unaFecha.dd == otraFecha.dd) &&
            (unaFecha.mm == otraFecha.mm) && (unaFecha.yyyy == otraFecha.yyyy);
}

bool operator<(const Fecha& unaFecha, const Fecha& otraFecha){
    if (unaFecha.yyyy < otraFecha.yyyy) return true;
    if (unaFecha.yyyy > otraFecha.yyyy) return false;
    if (unaFecha.mm < otraFecha.mm) return true;
    if (unaFecha.mm > otraFecha.mm) return false;
    if (unaFecha.dd < otraFecha.dd) return true;
    if (unaFecha.dd > otraFecha.dd) return false;
    return false;
}

bool operator<=(const Fecha& unaFecha, const Fecha& otraFecha){
    if (unaFecha == otraFecha) return true;
    return (unaFecha < otraFecha);
}

bool operator>(const Fecha& unaFecha, const Fecha& otraFecha){
    if (unaFecha == otraFecha) return false;
    return !(unaFecha < otraFecha);
}

std::ostream& operator << (std::ostream &out, const Fecha &unaFecha){
    out << unaFecha.dd << "/" << unaFecha.mm << "/"  << unaFecha.yyyy;
    return out;
}
