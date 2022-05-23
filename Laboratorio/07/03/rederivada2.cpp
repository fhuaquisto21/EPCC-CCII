#include <iostream>
#include <string>
#include "rederivada2.h"

using namespace std;

Hipoteca::Hipoteca(string _cliente, double _saldo, int _numProductos): Prestamo(_cliente, _saldo, _numProductos) {}

Hipoteca::~Hipoteca() {}

void Hipoteca::imprimir() {
    printf("Cuenta:\n");
    printf("Cliente: %s\n", this->cliente.c_str());
    printf("Saldo: %.2f\n", this->saldo);
    printf("Cantidad de productos: %i\n", this->numProductos);
}
