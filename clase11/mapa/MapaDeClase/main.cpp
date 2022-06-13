#include <iostream>
#include "mapaconvector.cpp"
#include "mapaconstruct.cpp"

using namespace std;

int main()
{
    MapaConStruct<int,char> mapita;
    mapita.agregar(5,'b');
    mapita.agregar(6,'c');
    mapita.agregar(34,'d');
    mapita.agregar(35,'h');
    cout << mapita.agregar(35,'x')<<endl;
    cout << *mapita.get(35)<<endl;
    cout << *mapita.get(34)<<endl;
    cout << *mapita.get(6)<<endl;
    return 0;
}
