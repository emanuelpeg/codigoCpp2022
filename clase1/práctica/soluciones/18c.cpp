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

int diferencia(int d, int d2, int m, int m2, int a, int a2){
    int meses[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(es_bisiesto(a)){
        d += a*366;
        d += meses[m];
    }
    else{
        d += a*365;
        d += (meses[m]);
        if(m == 2)
            d -= 1;
    }
    if(es_bisiesto(a2)){
        d2 += a*366;
        d2 += meses[m2];
    }
    else{
        d2 += a*365;
        d2 += (meses[m2]);
        if(m == 2)
            d2 -= 1;
    }
    return (d2 - d);
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
    if(!validar(d, m, a)){
        cout << "Fecha erronea\nDiferencia en dias: 0\n";
        exit(1);
    }
    else{
        cout << "Inserte segunda fecha de la forma 'dd-mm-aaaa'\n";
        getline(cin, dia, '-');
        getline(cin, mes, '-');
        getline(cin, anio);
        int d2 = stoi(dia);
        int m2 = stoi(mes);
        int a2 = stoi(anio);
        if(!validar(d2, m2, a2)){
            cout << "Fecha erronea\nDiferencia en dias: 0\n";
            exit(1);
        }else{
            cin.get();
            cout << diferencia(d, d2, m, m2, a, a2);
        }
    }
    return 0;
}
