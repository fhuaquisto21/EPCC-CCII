#include <iostream>
#include <string>
#include "derivada2.h"

using namespace std;

Prestamo::Prestamo(string _cliente, double _saldo, int _numProductos): ProductoBancario(_cliente, _saldo, _numProductos) {}

Prestamo::~Prestamo() {}

void Prestamo::imprimir() {
    printf("Cuenta:\n");
    printf("Cliente: %s\n", this->cliente.c_str());
    printf("Saldo: %.2f\n", this->saldo);
    printf("Cantidad de productos: %i\n", this->numProductos);
}
