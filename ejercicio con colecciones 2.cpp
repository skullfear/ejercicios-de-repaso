#include <iostream>
#include <tuple>

using namespace std;

bool esNumeroValidoEnBase(int numero, int base) {
    while (numero > 0) {
        int digito = numero % base;
        if (digito >= base) {
            return false;
        }
        numero /= base;
    }
    return true; 
}

int main() {
    int numero, base;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Ingrese la base del sistema: ";
    cin >> base;

    if (esNumeroValidoEnBase(numero, base)) {
        cout << numero << " es un numero valido en base " << base << "." << endl;
    } else {
        cout << numero << " no es un numero valido en base " << base << "." << endl;
    }

    return 0;
}


