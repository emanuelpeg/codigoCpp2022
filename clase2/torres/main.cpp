#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef int Disco;
int cont = 0;

void MoverDiscos(unsigned short DiscoN, stack<Disco>& TorreOrigen, stack<Disco>& TorreAuxiliar, stack<Disco>& TorreDestino);

int main()
{
    stack<Disco> origen, aux, destino;
    origen.push(60);
    origen.push(50);
    origen.push(40);
    origen.push(30);
    origen.push(20);
    origen.push(10);
    MoverDiscos(5, origen, aux, destino);

    while (!destino.empty()) {
        cout << destino.top() <<endl;
        destino.pop();
    }
    cout << cont;
    return 0;
}

void MoverDiscos(unsigned short DiscoN, stack<Disco>& TorreOrigen, stack<Disco>& TorreAuxiliar, stack<Disco>& TorreDestino)
{
    if(DiscoN == 1)
        {
            if(TorreOrigen.size())
            {
                TorreDestino.push(TorreOrigen.top());
                TorreOrigen.pop();
                cout << "Mueve" << endl;
                cont++;
            }
        }
    else
    {
        MoverDiscos(DiscoN-1, TorreOrigen, TorreDestino, TorreAuxiliar);
        if(TorreOrigen.size())
        {
            TorreDestino.push(TorreOrigen.top());
            TorreOrigen.pop();
            cout << "Mueve" << endl;
            cont++;
        }
        MoverDiscos(DiscoN-1, TorreAuxiliar, TorreOrigen, TorreDestino);
        }
}
