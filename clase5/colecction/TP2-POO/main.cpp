#include <iostream>
#include "lista.h"
#include "coleccion.h"
#include "listaordenada.h"
#include "conjunto.h"
#include "conjuntoordenado.h"
#include "vector.h"
#include "pila.h"
#include "cola.h"
using namespace std;

// Coleccion funciona con polimorfismo: Lista, ListaOrdenada, Conjunto, ConjuntoOrdenado, Vector.
// Pila y Cola son dos clases diferentes.

int main()
{
    Coleccion *objeto = new Lista ();
    objeto->alta(26);
    objeto->alta(18);
    objeto->alta(28);
    objeto->alta(20);

    for (int i=0; i<objeto->getSize(); i++) {
        cout<<objeto->getValue(i)<<" ";
    }
    cout<<endl;
    delete objeto;

    Pila *pila = new Pila ();
    pila->insertar(2);
    pila->insertar(4);
    pila->insertar(6);

    cout<<pila->eliminar()<< " ";
    cout<<pila->eliminar()<< " ";
    cout<<pila->eliminar()<< " ";
    cout<<endl;

    Cola *cola = new Cola ();
    cola->insertar(2);
    cola->insertar(4);
    cola->insertar(6);


    cout<<cola->eliminar()<<" ";
    cout<<cola->eliminar()<<" ";
    cout<<cola->eliminar()<<" "<<endl;


    return 0;
}

