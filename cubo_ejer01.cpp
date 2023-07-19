//1) Diseñe la función que calcule el cubo de un número.

#include <iostream>

using namespace std;

int calcularCubo(int numero) {
    int cubo = numero * numero * numero;
    return cubo;
}

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    int resultado = calcularCubo(numero);

    cout << "El cubo de " << numero << " es: " << resultado << endl;

    return 0;
}