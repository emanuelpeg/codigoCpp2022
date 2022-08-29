#include "agenda.h"
#include <vector>
#include <utility>
#include <map>

Agenda::Agenda()
{
}

void Agenda::insertar(Fecha fecha, Persona persona) {
    this->agenda.insert(std::make_pair(fecha, persona));
}

std::vector<Persona> Agenda::listarPersonasQueCumplen(Fecha fecha){
    std::vector<Persona> resultado;

    std::pair<std::multimap<Fecha,Persona>::iterator, std::multimap<Fecha,Persona>::iterator> ppp;

    ppp = this->agenda.equal_range(fecha);

    for (std::multimap<Fecha,Persona>::iterator it2 = ppp.first;
           it2 != ppp.second;
           ++it2) {

        resultado.push_back(it2->second);
    }

    return resultado;
}
