#include <iostream>
#include "class.cpp"

using namespace std;

int main() {
    int base, altura;
    Rectangulo *rect = new Rectangulo();
    printf("Base del rectángulo: ");
    cin >> base;
    printf("Altura del rectángulo: ");
    cin >> altura;
    rect->setAltura(altura);
    rect->setBase(base);
    printf("El rectángulo de base \"%i\" y de altura \"%i\" tiene como perímetro: %i\n", rect->getBase(), rect->getAltura(), rect->getPerimetro());
    return 0;
}
