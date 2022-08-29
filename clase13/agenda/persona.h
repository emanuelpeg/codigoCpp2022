#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
private:
    char * nombre;
    char * telefono;
public:
    Persona(char * nombre, char * telefono);
    char * getNombre();
    char * getTelefono();
};

#endif // PERSONA_H
