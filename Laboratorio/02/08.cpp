#include <iostream>

using namespace std;

int main() {
    int n;
    printf("Número del cuál quiera ver su tabla de multiplicar: ");
    cin >> n;

    printf("\nTABLA DE %i\n", n);
    for (int i = 1; i <= 12; i++) {
        printf("%i * %i = %i\n", n, i, n * i);
    }
    return 0;
}
