#include <iostream>
#include <vector>
#include "fecha.h"
#include "persona.h"
#include "agenda.h"
#include <map>

using namespace std;

int main()
{
    Agenda agenda = Agenda();
    Fecha f = Fecha(01,02,1997);
    agenda.insertar(f, Persona("Juan Orzales", "03456789"));
    agenda.insertar(Fecha(01,02,1999), Persona("Pedro Garcia", "03456789"));
    agenda.insertar(Fecha(01,02,1998), Persona("Oliver Ato", "789"));
    agenda.insertar(Fecha(05,02,1997), Persona("Antonio Andera", "0789"));
    agenda.insertar(Fecha(06,02,1997), Persona("Salvador Alí", "044456789"));
    agenda.insertar(Fecha(07,02,1997), Persona("Roberto Sanchez", "9003456789"));
    agenda.insertar(Fecha(01,12,1997), Persona("Sergio Deaca", "0311456789"));
    agenda.insertar(Fecha(01,11,1997), Persona("Aquiles Canto", "034560000"));
    agenda.insertar(Fecha(01,04,1997), Persona("Santiago Martinez", "1103456789"));
    agenda.insertar(f, Persona("Otro Juan", "07773456789"));

    vector<Persona> v = agenda.listarPersonasQueCumplen(f);

    for (int i = 0; i< v.size(); i++) {
        cout << i << " " << v[i].getNombre()<< endl;
    }

    cout << endl;

    return 0;
}

