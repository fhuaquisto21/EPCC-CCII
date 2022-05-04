#include <iostream>

using namespace std;

int main() {
    int matriz[5][3];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            int aux;
            printf("[%i][%i] Valor: ", i + 1, j + 1);
            cin >> aux;
            matriz[i][j] = aux;
        }
    }

    printf("\n");

    for (int i = 0; i < 5; ++i) {
        if ((i + 1) % 2 == 0) {
            int sum = 0;
            for (int j = 0; j < 3; ++j) {
                    sum += matriz[i][j];
            }
            printf("[%i] La suma es: %i\n", i + 1, sum);
        }
    }
    
    return 0;
}
