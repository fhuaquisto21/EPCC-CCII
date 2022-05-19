#include <iostream>

using namespace std;

class Rectangulo {
    private:
        int base;
        int altura;
    public:
        Rectangulo(int _base, int _altura) {
            this->altura = _altura;
            this->base = _base;
        }

        int calcularPerimetro() {
            return this->base * 2 + this->altura * 2;
        }

        int calcularArea() {
            return  this->base * this->altura;
        }
};

int main() {
    int b, h;
    printf("Base del rectángulo: ");
    cin >> b;
    printf("Altura del rectángulo: ");
    cin >> h;
    Rectangulo *rect = new Rectangulo(b, h);
    printf("El perímetro del rectángulo es: %i.\n", rect->calcularPerimetro());
    printf("El área del rectángulo es: %i.\n", rect->calcularArea());
    return 0;
}
