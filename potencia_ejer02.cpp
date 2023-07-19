/*2) Diseñe la función que eleve un número a una potencia indicada. No debe usar la librería math.h. 

Por ejemplo 2 elevado a la quinta potencia es 2 x2 x 2 x 2 x 2 = 32

4 elevado al cubo es 4 x 4 x 4 = 64

3 elevada a la cuarta es 3 x 3 x 3 x 3 = 81
*/


#include <iostream>
using namespace std;

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

void mostrarResultado(int base, int exponente, int resultado) {
    cout << base << " elevado a la " << exponente << " potencia es ";
    for (int i = 0; i < exponente; i++) {
        cout << base;
        if (i < exponente - 1) {
            cout << " x ";
        }
    }
    cout << " = " << resultado << endl;
}

int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    int resultado = potencia(base, exponente);
    
    mostrarResultado(base, exponente, resultado);
    
    return 0;
}