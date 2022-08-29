#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <map>
#include <vector>
#include "persona.h"
#include "fecha.h"

class Agenda
{
private:
    std::multimap<Fecha,Persona> agenda;
public:
    Agenda();
    void insertar(Fecha fecha, Persona persona);
    std::vector<Persona> listarPersonasQueCumplen(Fecha fecha);
};

#endif // AGENDA_H
