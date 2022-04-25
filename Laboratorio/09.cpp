#include <iostream>

using namespace std;

int main() {
    int vector[10];
    int sum;
    
    for (int i = 0; i < 10; i++) {
        if (vector[i] < 0) {
            sum += vector[i];
        }
    }

    printf("La suma de los numeros negativos es: %i\n", sum);
    return 0;
}
