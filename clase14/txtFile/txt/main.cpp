#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    ofstream myfile;
    myfile.open ("example.txt");

    char * buffer = new char[500];
    cin >> buffer;
    while (strcmp (buffer, ":q") != 0) {
        myfile << buffer << '\n';
        cin >> buffer;
    }

    myfile.close();
    string line;
    ifstream myifile("example.txt");
    while ( !myifile.eof() ) {
          getline (myifile,line);
          cout << line << '\n';
    }
    myifile.close();
}
