/* Fabricio Huaquisto Quispe
 * 20210678 */

#include <iostream>

using namespace std;

int newPow(int n, int p) {
    int pot = n;
    for (int i = 0; i < p - 1; ++i) {
        pot *= n;
    }
    
    return pot;
}

int main() {
    int n, p;
    printf("Valor de N: ");
    cin >> n;

    printf("Potencia: ");
    cin >> p;

    int pot = newPow(n, p);

    printf("\"%i\" elevado a \"%i\" es igual a: %i\n", n, p, pot);
    return 0;
}
