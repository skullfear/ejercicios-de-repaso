#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " es un numero par." << endl;
    } else {
        cout << numero << " es un numero impar." << endl;
    }

    return 0;
}

