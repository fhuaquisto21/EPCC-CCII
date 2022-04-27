#include <iostream>

using namespace std;

int main() {
    int vectorNums[10];
    int sum = 0;

    for (int i = 0; i < 10; ++i) {
        cin >> vectorNums[i];
    }
    
    for (int i = 0; i < 10; i++) {
        if (vectorNums[i] < 0) {
            sum += vectorNums[i];
        }
    }

    printf("La suma de los numeros negativos es: %i\n", sum);
    return 0;
}
