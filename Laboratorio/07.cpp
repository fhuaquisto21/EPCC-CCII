#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    printf("n1: ");
    cin >> n1;
    printf("n2: ");
    cin >> n2;

    if (n1 % n2 == 0) {
        printf("%i es divisor de %i\n", n2, n1);
    } else if (n2 % n1 == 0) {

        printf("%i es divisor de %i\n", n1, n2);
    } else {
        printf("No son divisores.\n");
    }
    return 0;
}
