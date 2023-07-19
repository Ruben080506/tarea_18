/*4) Diseñe la función que calcule la siguiente suma:

1-2+3-4+5-6+7-8+9 .... hasta llegar a N que es límite de la serie (N pasa como parámetro) 
*/

#include <iostream>

using namespace std;

int calcularSumaAlternada(int N) {
    int suma = 0;
    int signo = 1;

    for (int i = 1; i <= N; i++) {
        suma += signo * i;
        signo *= -1;
    }

    return suma;
}

int main() {
    int N;

    cout << "Ingresa el límite de la serie: ";
    cin >> N;

    int resultado = calcularSumaAlternada(N);

    cout << "La suma alternada hasta " << N << " es: " << resultado << endl;

    return 0;
}