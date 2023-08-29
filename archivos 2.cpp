#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nombreArchivo;

    cout << "Ingrese el nombre del archivo de texto: ";
    cin >> nombreArchivo;

    ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    string linea;

    cout << "Contenido del archivo:" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();

    return 0;
}

