#include <iostream>
#include "map.cpp"
#include "doc.h"

using namespace std;
typedef char* pchar;

int main()
{
    Map<Doc,pchar> alumnos;
    Doc doc('d', 344566);

    alumnos.put(doc, "Juan");

    pchar * resultado = alumnos.get(doc);
    if (resultado != 0) {
           cout << *resultado << endl;
    }

    return 0;
}
