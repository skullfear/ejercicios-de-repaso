#include <iostream>

using namespace std;

int main() {
    float num1, num2, suma, resta, multiplicacion, division;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    if (num2 != 0) {
        division = num1 / num2;
    } else {
        cout << "No es posible dividir por cero" << endl;
        return 1; // Salir del programa con un código de error
    }

    // Mostrar los resultados
    cout << "Suma: " << num1 << " + " << num2 << " = " << suma << endl;
    cout << "Resta: " << num1 << " - " << num2 << " = " << resta << endl;
    cout << "Multiplicación: " << num1 << " * " << num2 << " = " << multiplicacion << endl;
    cout << "División: " << num1 << " / " << num2 << " = " << division << endl;

    return 0;
}

