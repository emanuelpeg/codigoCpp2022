#include <iostream>
#include "juego.h"

using namespace std;

int main()
{
    Juego unJuego;
    char s;
    do {
        unJuego.generar();

        cout << unJuego << endl;
        int nro;
        cin >> nro;

        if (unJuego.isOk(nro)) {
            cout << "Ganaste!! " << unJuego.getPuntos()<<endl;
        } else {
            cout << "Sos malisisimo !! " << unJuego.getPuntos()<<endl;
        }
        cout << " Continuar? [Y/n] ";
        cin >> s;
    } while(s != 'n');

    return 0;
}
