#include <iostream>
#include <string>
#define N 3
using namespace std;
bool validar_edad(unsigned int e);

int main(){
    string nombre[N];
    unsigned int edad[N];
    unsigned int cont = 0;
    do{
        cout << "Ingrese edad\n";
        cin >> edad[cont];
        if (validar_edad(edad[cont])){
            cout << "Ingrese apellido nombre completo\n";
            cin.get();
            getline(cin, nombre[cont]);
            cont += 1;
        }
    }while(cont < N);

    unsigned int id;
    for(int i = 0; i < N; i++){
        unsigned int mayor = 0;
        if(edad[i] > mayor){
            mayor = edad[i];
            id = mayor;
        }
    }

    cout << "Integrante de mayor edad, " << nombre[id] << endl;
    return 0;
}

bool validar_edad(unsigned int e){
    if(e >= 12 and e <= 90)
        return true;
    else
        return false;
}
