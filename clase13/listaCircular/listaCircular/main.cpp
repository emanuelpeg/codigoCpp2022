#include <iostream>
#include "listacircular.cpp"

using namespace std;

int main()
{
    ListaCircular<int> l;
    l.add(1);
    l.add(2);
    l.add(3);
    l.add(4);
    l.add(5);
    l.add(6);

    for (int i = 0; i < 100; i++) {
        cout << l.get(i) << endl;
    }
    return 0;
}
