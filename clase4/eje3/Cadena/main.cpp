#include <iostream>
#include "cadena.h"

using namespace std;

int main()
{
    Cadena unaCadena("Hello World!");
    cout << unaCadena.getCant() << endl;
    cout << unaCadena.toupper().getC() << endl;
    unaCadena.add('!');
    cout << unaCadena.getC() << endl;
    return 0;
}

