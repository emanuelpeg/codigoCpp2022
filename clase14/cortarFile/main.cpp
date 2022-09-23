#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;

void cortar(string, int);

int main()
{
    cortar("/home/emanuel/numeros", 3);
    return 0;
}

void cortar(string nombre, int cant){
    ifstream origen;
    origen.open(nombre.c_str());

    if(origen.is_open()){
        string line;
        int count =0;

        //cuento las lineas
        while (getline(origen, line)){
            count++;
        }
        origen.close();


        if (count >= cant) {
            int n = count/cant;
            origen.open(nombre.c_str());
            count = 0;
            int nroArchivo = 0;
            ofstream destino;

            while (getline(origen, line)){

                if ((count % n) == 0) {
                    if (nroArchivo > 0) destino.close();

                    std::stringstream sstm;
                    sstm << nombre << nroArchivo;
                    string newName = sstm.str();

                    destino.open(newName.c_str());
                    nroArchivo++;
                }
                destino << line << endl;
                count++;
            }

            if (nroArchivo > 0) destino.close();
        } else {
            cout << "Error el archivo tiene " << count << "lineas no se puede dividir en "<< cant << " partes. "<<endl;
        }
    } else {
        cout << "No se pudo leer el archivo";
    }
}
