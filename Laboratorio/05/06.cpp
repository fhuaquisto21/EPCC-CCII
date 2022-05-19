#include <iostream>
#include <vector>

using namespace std;

void sumar(int a, int b) {
    printf("La suma es: %i\n", a + b);
}

void restar(int a, int b) {
    printf("La resta es: %i\n", a - b);
}

void multiplicar(int a, int b) {
    printf("La multiplicaión es %i\n", a * b);
}

void dividir(int a, int b) {
    printf("La división es: %i\n", a / b);
}

void mostrarMenu() {
    printf("MENU\n");
    printf("[1] Sumar\n");
    printf("[2] Restar\n");
    printf("[3] Multiplicar\n");
    printf("[4] Dividir\n");
    printf("[0] Salir\n");
    printf("Select: ");
}

int main() {
    vector<void (*)(int, int)> functions;
    functions.push_back(sumar);
    functions.push_back(restar);
    functions.push_back(multiplicar);
    functions.push_back(dividir);
    int a, b, opt;
    do {
        mostrarMenu();
        cin >> opt;
        if (opt > 0) {
            printf("A: ");
            cin >> a;
            printf("B: ");
            cin >> b;
            functions[opt - 1](a, b);
        }
    } while (opt != 0);

    return 0;
}
