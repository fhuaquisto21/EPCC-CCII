#include <iostream>
#include <vector>
#include "class.cpp"

using namespace std;

int main() {
    Cubo *cubo = new Cubo();
    int dato;
    printf("Dato a buscar: ");
    cin >> dato;
    vector<int> coords = cubo->buscarDato(dato);
    printf("Matriz\n");
    cubo->mostrarMatriz();
    printf("El dato se encuentra en: [%i][%i] de la matriz.\n", coords[0], coords[1]);
    return 0;
}
