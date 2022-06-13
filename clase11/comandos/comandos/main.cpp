#include <iostream>
#include "comando.cpp"
#include "suma.cpp"

using namespace std;

int main()
{
    Comando<int> * comandoInicial = new Suma<int>(20);
    Comando<int> * sig =new Suma<int>(1);
    sig->setSig(new Suma<int>(1));
    comandoInicial->setSig(sig);
    cout << comandoInicial->apply(300) << endl;
    return 0;
}
