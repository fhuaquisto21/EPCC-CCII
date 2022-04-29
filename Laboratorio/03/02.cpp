/* Fabricio Huaquisto Quispe
 * 20210678 */

#include <iostream>

using namespace std;

bool bisiesto(int anio) {
    if (anio % 400 == 0) {
        return true;
    } else {
        if (anio % 4 == 0 && anio % 100 != 0) {
            return true;
        }
        return false;
    }
}

int main() {
    int anio;
    printf("Año: ");
    cin >> anio;

    bool bis = bisiesto(anio);
    if (bis) {
        printf("El año %i es bisiesto.\n", anio);
    } else {
        printf("El año %i no es bisiesto.\n", anio);
    }
    return 0;
}
