#include <iostream>
#include "class.h"

using namespace std;

Rectangulo::Rectangulo() {}

Rectangulo::Rectangulo(int _altura, int _base) {
    this->altura = _altura;
    this->base = _base;
}

int Rectangulo::getAltura() {
    return this->altura;
}

int Rectangulo::setAltura(int _altura) {
    this->altura = _altura;
    return this->altura;
}

int Rectangulo::getBase() {
    return this->base;
}

int Rectangulo::setBase(int _base) {
    this->base = _base;
    return this->base;
}

int Rectangulo::getPerimetro() {
    return this->altura * 2 + this->base * 2;
}
