/*3) Diseñe la función que calcule el factorial de un número:

Por ejemplo:

Factorial de 5 es 5 x 4 x 3 x 2 x 1 = 120

Factorial de 4 es 4 x 3 x 2 x 1 = 24

Factorial de 7 es 7 x 6 x 5 x 4 x 3 x 2 x 1 =
*/


#include <iostream>

using namespace std;

int calcularFactorial(int numero) {
    int factorial = 1;

    for (int i = numero; i >= 1; i--) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    int resultado = calcularFactorial(numero);

    cout << "El factorial de " << numero << " es: ";

    for (int i = numero; i >= 1; i--) {
        cout << i;
        
        if (i != 1) {
            cout << " x ";
        }
    }

    cout << " = " << resultado << endl;

    return 0;
}
