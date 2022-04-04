#include <iostream>

using namespace std;

int * agregarInicio(int * v, int cantidad, int nuevo) {
    int * aux = new int[cantidad+1];
    for (int i =0; i<cantidad; i++) {
        aux[i+1] = v[i];
    }
    aux[0] = nuevo;
    return aux;
}

int * agregar(int * v, int cantidad, int nuevo) {
    int * aux = new int[cantidad+1];
    for (int i =0; i<cantidad; i++) {
        aux[i] = v[i];
    }
    aux[cantidad] = nuevo;
    return aux;
}

int ocurrencia(int * vec, int cant, int elemento) {
    int j = 0;
    for(int i = 0; i < cant; i++) {
        if (vec[i] == elemento) {
            j++;
        }
    }
    return j;
}

int * remove(int * vec, int cant, int elemento, int &cantFinal) {
    int ocu = ocurrencia(vec, cant, elemento);
    int * vecAux = new int[cant-ocu];
    int j = 0;
    for(int i = 0; i < cant; i++) {
        if (vec[i] != elemento) {
            vecAux[j] = vec[i];
            j++;
        }
    }
    cantFinal = cant-ocu;
    return vecAux;
}

int main(int argc, char *argv[])
{
    int v[] = {1,2,3};
    int * aux = agregar( v, 3, 4);

    for (int i = 0; i < 4; i++) {
        cout << aux[i] << " ";
    }

    cout << endl;

    aux = agregarInicio( aux, 4, 0);

    for (int i = 0; i < 5; i++) {
        cout << aux[i] << " ";
    }

    cout << endl;

    int cant2;
    int * aux2 = remove(aux, 5, 2, cant2);

    for (int i = 0; i < cant2; i++) {
        cout << aux2[i] << " ";
    }

}
