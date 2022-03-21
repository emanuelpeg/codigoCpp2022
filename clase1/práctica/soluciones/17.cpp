#include <iostream>
using namespace std;

bool es_bisiesto(int n){
    if(n%4 == 0 and (n%100 != 0 or n%400 == 0))
        return true;
    else
        return false;
}

bool validar(int d, int m, int a){
    bool ok = false;
    switch(m){
        case 1:
            if(d <= 31 and d > 0)
                ok = true; 
        break;

        case 2:
            if(d <= 29 and d > 0 and es_bisiesto(a))
                ok = true;
            else if(d <= 28 and d > 0 and !es_bisiesto(a))
                ok = true;
        break;

        case 3:
            if(d <= 31 and d > 0)
                ok = true; 
        break;

        case 4:
            if(d <= 30 and d > 0)
                ok = true; 
        break;

        case 5:
            if(d <= 31 and d > 0)
                ok = true; 
        break;

        case 6:
            if(d <= 30 and d > 0)
                ok = true; 
        break;

        case 7:
            if(d <= 31 and d > 0)
                ok = true; 
        break;

        case 8:
            if(d <= 31 and d > 0)
                ok = true; 
        break;

        case 9:
            if(d <= 30 and d > 0)
                ok = true; 
        break;

        case 10:
            if(d <= 31 and d > 0)
                ok = true; 
        break;

        case 11:
            if(d <= 30 and d > 0)
                ok = true; 
        break;

        case 12:
            if(d <= 31 and d > 0)
                ok = true; 
        break;
    }
    return ok;
}

int main(){
    string dia, mes, anio;
    cout << "Inserte fecha de la forma 'dd-mm-aaaa'\n";
    getline(cin, dia, '-');
    getline(cin, mes, '-');
    getline(cin, anio);
    int d = stoi(dia);
    int m = stoi(mes);
    int a = stoi(anio);
    cout << validar(d, m, a);
    return 0;
}
