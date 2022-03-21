#include <iostream>
#define TAM 3
using namespace std;

void intercambio(int &a, int &b);
void intercambio(float a[], float b[]);
void intercambio(char &a, char &b);

int main(){
    auto x = 'a';
    auto y = 'b';
    //cout << x << "\t" << y << endl;
    intercambio(x, y);
    //cout << x << "\t" << y << endl;
    return 0;
}

    void intercambio(int &a, int &b){
        int aux = a;
        a = b;
        b = aux;
    }
    void intercambio(float a[], float b[]){
        for(int i = 0; i < TAM; i++){
            float aux;
            aux = a[i];
            a[i] = b[i];
            b[i] = aux;
        }

    }
    void intercambio(char &a, char &b){
        char aux = a;
        a = b;
        b = aux;
    }
