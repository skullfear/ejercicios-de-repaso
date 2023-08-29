#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;

    cout << "Ingrese una frase: ";
    getline(cin, frase);

    cout << "La frase al reves es: ";
    for (int i = frase.length() - 1; i >= 0; i--) {
        cout << frase[i];
    }
    
    cout << endl;

    return 0;
}

