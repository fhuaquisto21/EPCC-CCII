#include <iostream>

using namespace std;

// basicOperation devuelve las 4 operaciones básicas.
template <class number>
void basicOperation(number n1, number n2) {
    cout << "Suma: " << n1 + n2 << endl;
    cout << "Resta: " << n1 - n2 << endl;
    cout << "Multiplicación: " << n1 * n2 << endl;
    cout << "División: " << n1 / n2 << endl;
}

int main() {
    int a, b;
    printf("Valor 1: ");
    cin >> a;
    printf("Valor 2: ");
    cin >> b;
    cout << endl;
    basicOperation(a, b);
    return 0;
}
