#include <iostream>

using namespace std;

bool areFactors(int n, int vec[], int length) {
    for (int i = 0; i < length; ++i) {
        if (vec[i] % n != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int length;
    printf("Largo del vector: ");
    cin >> length;
    int vec[length];
    for (int i = 0; i < length; ++i) {
        printf("[%i] Valor: ", i + 1);
        cin >> vec[i];
    }

    printf("N: ");
    cin >> n;
    printf("%s factores.\n", areFactors(n, vec, length) ? "Son" : "No son");
    return 0;
}
