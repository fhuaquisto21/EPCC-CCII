#include <iostream>
#include <string>
#include "rederivada1.h"

using namespace std;

CuentaJoven::CuentaJoven(string _cliente, double _saldo, int _numProductos): Cuenta(_cliente, _saldo, _numProductos) {}

CuentaJoven::~CuentaJoven() {}

void CuentaJoven::imprimir() {
    printf("Cuenta:\n");
    printf("Cliente: %s\n", this->cliente.c_str());
    printf("Saldo: %.2f\n", this->saldo);
    printf("Cantidad de productos: %i\n", this->numProductos);
}

