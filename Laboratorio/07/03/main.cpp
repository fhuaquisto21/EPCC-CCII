#include <iostream>
#include <string>
#include "rederivada1.cpp"
#include "rederivada2.cpp"

using namespace std;

int main() {
    string cliente;
    double saldo;
    int numProductos;
    printf("Cliente: ");
    cin >> cliente;
    printf("Saldo: ");
    cin >> saldo;
    printf("Cantidad de productos: ");
    cin >> numProductos;
    CuentaJoven joven(cliente, saldo, numProductos);
    Hipoteca hipo(cliente, saldo, numProductos);
    joven.imprimir();
    hipo.imprimir();
}
