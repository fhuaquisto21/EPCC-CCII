#include <iostream>
#include <string>

using namespace std;

int main() {
    string pass;
    string intent;
    printf("Escriba su nueva contraseña: ");
    cin >> pass;

    do {
        printf("Por favor ingrese su contraseña: ");
        cin >> intent;
    } while (pass != intent);

    printf("Correcto! Esa es la correcta.\n");

    return 0;
}
