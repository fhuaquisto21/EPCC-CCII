#include <iostream>
#include <string>
#include "derivada1.h"

using namespace std;

Cuenta::Cuenta(string _cliente, double _saldo, int _numProductos): ProductoBancario(_cliente, _saldo, _numProductos) {}

Cuenta::~Cuenta() {}

void Cuenta::imprimir() {
    printf("Cuenta:\n");
    printf("Cliente: %s\n", this->cliente.c_str());
    printf("Saldo: %.2f\n", this->saldo);
    printf("Cantidad de productos: %i\n", this->numProductos);
}
