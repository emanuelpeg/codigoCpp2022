#include <iostream>
#include <iomanip>
using namespace std;
void menu();
void par(int x);
int doble(int x);
bool es_primo(int x);

int main(int argc, char *argv[]) {
	char word;
	int num;
	bool band = true;
	while(band){
		cout << "Ingrese un numero\n" << endl;
		cin >> num;
		menu();
		cout << "Ingrese una letra\n" << endl;
		cin >> word;
		switch(word){
			case 'A':
				cout << doble(num) << endl;
			break;
			case 'B':
				par(num);
			break;
			case 'C':
				cout << es_primo(num) << endl;
			break;
			case 'D':
				band = false;
			break;
			default:
				cout << "Error de entrada\n";
			break;
		}
	}
	return 0;
}

int doble(int x){
	return (2*x);
}

void par(int x){
	if(x % 2 == 0)
		cout << "Es par\n";
	else
		cout << "Es impar\n";
}

bool es_primo(int n){
    bool primo = true;
    for(int i = 2; i < n; i++) {
        if (n%i == 0)
            primo = false;
    }
    return primo;
}
	
void menu(){
	cout << "CALCULOS\n";
	cout << setw(3) << "A- Calcular el doble del dato.\n";
	cout << setw(3) << "B- Determinar si es par.\n";
	cout << setw(3) << "C- Determinar si es primo.\n";
	cout << setw(3) << "D- Salir.\n";
	cout << "Elija una opcion (A..D):\n";
}
