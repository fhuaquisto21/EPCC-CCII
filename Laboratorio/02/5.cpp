#include <iostream>

using namespace std;

int main() {
    int n, mayor, menor;
    float sum;

    printf("Valor de N: ");
    cin >> n;
    sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        printf("[%i] Ingrese un número: ", i + 1);
        cin >> num;
        if (i == 0) {
            mayor = num;
            menor = num;
        } else {
            if (num > mayor) {
                mayor = num;
            } else if (num < menor) {
                menor = num;
            }
        }

        sum += num;
    }

    printf("El número mayor es: %i\n", mayor);
    printf("El número menor es: %i\n", menor);
    printf("La media es: %.2f\n", sum / n);


    return 0;
}
