#include "persona.h"

Persona::Persona(char * nombre, char * telefono){
    this->nombre = nombre;
    this->telefono = telefono;
}

char * Persona::getNombre(){
    return this->nombre;
}

char * Persona::getTelefono(){
    return this->telefono;
}
