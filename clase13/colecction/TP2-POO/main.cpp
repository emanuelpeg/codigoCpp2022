#include <iostream>
#include "lista.cpp"
#include "coleccion.cpp"
#include "listaordenada.cpp"
#include "conjunto.cpp"
#include "conjuntoordenado.cpp"
#include "vector.cpp"
#include "pila.cpp"
#include "cola.cpp"
using namespace std;
int main()
{
    cout<< "LISTA ORDENADA" <<endl;
    Coleccion<int> *objeto = new ListaOrdenada<int>();
    objeto->alta(26);
    objeto->alta(18);
    objeto->alta(28);
    objeto->alta(20);
    //objeto->recorrer();
    for (int i=0; i<objeto->getSize(); i++) {
        cout<<objeto->getValue(i)<<" ";
    }
    cout<<endl<<endl;
    delete objeto;

    cout<< "PILA" <<endl;
    Pila<int> *pila = new Pila<int> ();
    pila->insertar(2);
    pila->insertar(4);
    pila->insertar(6);
    //cout<<pila->get_size()<<endl;
    cout<<pila->eliminar()<<" ";
    cout<<pila->eliminar()<<" ";
    cout<<pila->eliminar()<<" ";
    //cout<<pila->get_size()<<endl;
    cout<<endl<<endl;
    delete pila;

    cout<< "COLA" <<endl;
    Cola<char> *cola = new Cola<char> ();
    cola->insertar('a');
    cola->insertar('4');
    cola->insertar('6');
    //cout<<cola->get_size()<<endl;
    cout<<cola->eliminar()<<" ";
    cout<<cola->eliminar()<<" ";
    cout<<cola->eliminar()<<" ";
    //cout<<cola->get_size()<<endl;
    cout<<endl<<endl;
    delete cola;

    cout<< "VECTOR" <<endl;
    Coleccion<int> *vector = new Vector<int>();
    vector->alta(26);
    vector->alta(18);
    vector->alta(28);
    vector->alta(20);
    //objeto->recorrer();
    for (int i=0; i<vector->getSize(); i++) {
        cout<<vector->getValue(i)<<" ";
    }
    cout<<endl<<endl;
    delete vector;

    cout<< "CONJUNTO ORDENADO" <<endl;
    Coleccion<int> *conjuntoOrdenado = new ConjuntoOrdenado<int>();
    conjuntoOrdenado->alta(26);
    conjuntoOrdenado->alta(18);
    conjuntoOrdenado->alta(28);
    conjuntoOrdenado->alta(20);
    conjuntoOrdenado->alta(20);
    conjuntoOrdenado->alta(20);
    conjuntoOrdenado->alta(20);
    conjuntoOrdenado->alta(10);
    //objeto->recorrer();
    for (int i=0; i<conjuntoOrdenado->getSize(); i++) {
        cout<<conjuntoOrdenado->getValue(i)<<" ";
    }
    cout<<endl<<endl;
    delete conjuntoOrdenado;

    return 0;
}

