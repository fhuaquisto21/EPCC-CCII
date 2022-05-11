#include <iostream>

using namespace std;

int main() {
    int a, b, aux;
    int *pa = &a;
    int *pb = &b;

    printf("Valor de A: ");
    cin >> *pa;
    printf("Valor de B: ");
    cin >> *pb;
    
    aux = *pa;
    a = *pb;
    b = aux;

    printf("\nValor de A: %i\n", a);
    printf("Valor de B: %i\n", b);
    return 0;
}
