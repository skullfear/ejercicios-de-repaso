#include <iostream>

using namespace std;

double calcularResultado(double numero) {
    double resultado = numero * numero - 2 * numero;
    return resultado;
}

int main() {
    double numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    double resultado = calcularResultado(numero);

    cout << "El resultado de restar el doble del numero a su cuadrado es: " << resultado << endl;

    return 0;
}

