#include <iostream>
#include <string>
#include "derivada.h"

using namespace std;

Objecto::Objecto() {}

void Objecto::agregarObjecto(string _nombre, string _tipo, int _r, int _g, int _b) {
    this->nombre = _nombre;
    this->agregarMaterial(_tipo);
    this->agregarColor(_r, _g, _b);
}

void Objecto::mostrarObjecto() {
    printf("OBJECTO:\n");
    printf("Nombre: %s\n", this->nombre.c_str());
    printf("Material: %s\n", this->tipo.c_str());
    printf("Color: rgb(%i, %i, %i)\n", this->rgb[0], this->rgb[1], this->rgb[2]);
}
