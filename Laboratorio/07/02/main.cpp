#include <iostream>
#include <vector>
#include <string>
#include "derivada.cpp"

using namespace std;

int main() {
    Objecto *obj = new Objecto();
    string nombre, tipo;
    int r, g, b;
    int aux;
    printf("Objecto: ");
    cin >> nombre;
    printf("Material: ");
    cin >> tipo;
    printf("Color (r): ");
    cin >> r;
    printf("Color (g): ");
    cin >> g;
    printf("Color (b): ");
    cin >> b;
    obj->agregarObjecto(nombre, tipo, r, g, b);
    printf("\n");
    obj->mostrarObjecto();
    return 0;
}
