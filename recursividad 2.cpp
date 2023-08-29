#include <iostream>

using namespace std;

int sumaNaturales(int n) {
    if (n == 0) {
        return 0; 
    } else {
        return n + sumaNaturales(n - 1); 
    }
}

int main() {
    int n;

    cout << "Ingrese un valor para 'n': ";
    cin >> n;

    int resultado = sumaNaturales(n);

    cout << "La suma de los primeros " << n << " numeros naturales es: " << resultado << endl;

    return 0;
}

