#include <iostream>
#include <map>
#include "bimap.cpp"

using namespace std;

int main()
{
    Bimap<char, int> bimap;
    bimap.put('a', 32);
    bimap.put('b', 34);
    bimap.put('c', 38);
    bimap.put('d', 52);
    bimap.put('z', 62);
    cout << bimap.put('x', 32) << endl;

    cout << bimap.clave(32) << endl;
    cout << bimap.valor('z') << endl<< endl<< endl;
    cout << bimap;
    return 0;
}
