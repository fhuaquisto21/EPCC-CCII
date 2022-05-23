#include <iostream>
#include <string>
#include "base2.h"

using namespace std;

Material::Material() {}

void Material::agregarMaterial(string _tipo) {
    this->tipo = _tipo;
}
