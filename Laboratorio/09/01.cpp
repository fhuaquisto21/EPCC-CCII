#include <iostream>

using namespace std;

// maxAndMin: Devuelve el máximo y mínimo de 3 números;
template <class number>
pair<number, number> maxAndMin(number num1, number num2, number num3) {
    pair<number, number> minmax;
    minmax.first = num1;
    minmax.second = num1;

    if (num2 > minmax.second) {
        minmax.second = num2;
    } else if (num2 < minmax.first) {
        minmax.first = num2;
    }

    if (num3 > minmax.second) {
        minmax.second = num3;
    } else if (num3 < minmax.first) {
        minmax.first = num3;
    }

    return minmax;
}


int main() {
    int n1, n2, n3;
    printf("Valor 1: ");
    cin >> n1;
    printf("Valor 2: ");
    cin >> n2;
    printf("Valor 3: ");
    cin >> n3;
    pair<int, int> minmax = maxAndMin(n1, n2, n3);
    printf("El mínimo es: %i\nEl máximo es: %i\n", minmax.first, minmax.second);
    return 0;
}
