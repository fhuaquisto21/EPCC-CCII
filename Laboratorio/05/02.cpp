#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int getNumRandom(int min, int max) {
    return min + rand() % (max - min);
}


int main() {
    srand(time(NULL));
    int n_max;
    int n_min;
    printf("Cantidad mínima del vector: ");
    cin >> n_min;
    printf("Cantidad máxima del vector: ");
    cin >> n_max;

    for (int i = 0; i < 1000000; ++i) {
        int n = getNumRandom(n_min, n_max);
        int sum = 0;
        int * vec1;
        int * vec2;
        vec1 = new int[n];
        vec2 = new int[n];
        for (int j = 0; j < n; ++j) {
            vec1[j] = getNumRandom(1, 100);
            vec2[j] = getNumRandom(1, 100);
            sum += vec1[j] * vec2[j];
        }

        printf("[%i] N: %i, SUM: %i\n", i + 1, n, sum);
        delete vec1;
        delete vec2;
    }

    return 0;
}
