#include <iostream>
#include "fraccion.h"

using namespace std;

int main()
{
    Fraccion f = Fraccion(55, 10);
    double d = f.mostrarFraccion();
    cout << d << endl;
    cout << f << " le sumamos " << Fraccion(3) << " = " << (f + Fraccion(3)) << endl;
    cout << f << " le resta " << Fraccion(3) << " = " << (f - Fraccion(3)) << endl;
    cout << f << " le sumamos " << Fraccion(1,2) << " = " << (f + Fraccion(1,2)) << endl;

    if (f == Fraccion(11,2)) {
        cout << f << " es igual a  " << Fraccion(11,2) << endl;
    }

    return 0;
}

