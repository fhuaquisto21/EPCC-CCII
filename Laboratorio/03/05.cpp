/* Fabricio Huaquisto Quispe
 * 20210678 */

#include <iostream>
#include <stdlib.h>

using namespace std;

void verificarRango(int x) {
    if (x < 0 || x > 100) {
        printf("ERROR: %i no es un valor dentro de 0 a 100.\n", x);
        exit(-1);
    }
}

void verificarParOImpar(int x) {
    if (x % 2 == 0) {
        printf("%i es par.\n", x);
    } else {
        printf("%i es impar.\n", x);
    }
}

int sumarImpares(int x) {
    int sum = 0;
    for (int i = 0; i <= x; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int x;
    printf("Valor de X (0 - 100): ");
    cin >> x;
    verificarRango(x);
    verificarParOImpar(x);
    int sumImpar = sumarImpares(x);
    printf("La suma de los número impares de 0 a %i es: %i\n", x, sumImpar);
    return 0;
}
