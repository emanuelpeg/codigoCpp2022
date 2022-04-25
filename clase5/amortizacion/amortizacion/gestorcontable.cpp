#include "gestorcontable.h"

GestorContable::GestorContable()
{
}

void GestorContable::imprimir(Bien * unBien){
    cout << *unBien << " amortizacion : "<< unBien->amortizar() << endl;
}
