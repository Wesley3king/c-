#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream file;
    file.open("teste.txt",ios::app);//ios::app -> concatena a string em vez de sobrescrever.
    file << "\nCANAL CFB CURSOS (2)";
    file.close();
    cout << "       EXECUTADO!";
    return 0;
}