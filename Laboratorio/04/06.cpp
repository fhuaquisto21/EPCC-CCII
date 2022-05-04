#include <iostream>

using namespace std;

int main() {
    int matriz[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("[%i][%i] Valor: ", i + 1, j + 1);
            cin >> matriz[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        int aux = 0;
        for (int num: matriz[i]) {
            aux += num;
        }
        if (aux > sum) {
            sum = aux;
        }
    }

    printf("La suma de fila mayor es: %i\n", sum);
    
    return 0;
}
