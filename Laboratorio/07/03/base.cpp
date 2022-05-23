#include <iostream>
#include <string>
#include "base.h"

using namespace std;

ProductoBancario::ProductoBancario(string _cliente, double _saldo, int _numProductos) {
    this->cliente = _cliente;
    this->saldo = _saldo;
    this->numProductos = _numProductos;
}

ProductoBancario::~ProductoBancario() {}

void ProductoBancario::imprimir() {
    printf("Cuenta:\n");
    printf("Cliente: %s\n", this->cliente.c_str());
    printf("Saldo: %.2f\n", this->saldo);
    printf("Cantidad de productos: %i\n", this->numProductos);
}
