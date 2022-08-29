#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char,int> palabras;

    string palabraAux;

    cin >> palabraAux;
    const char * palabra = palabraAux.c_str();
    int i = 0;

    while (palabra[i] != '\0') {
        palabras[palabra[i]]++;
        i++;
    }

    for (auto i = palabras.begin(); i != palabras.end(); ++i) {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}
