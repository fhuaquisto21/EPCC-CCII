#include <iostream>
#include <string>
#include "class.h"

using namespace std;

Persona::Persona() {}

Persona::Persona(int _anioNacimiento, string _nombre) {
    this->anioNacimiento = _anioNacimiento;
    this->nombre = _nombre;
}

void Persona::setPersona(int _anioNacimiento, string _nombre) {
    this->anioNacimiento = _anioNacimiento;
    this->nombre = _nombre;
}

void Persona::getEdad(int _anioActual) {
    printf("%s, usted tiene %i años de edad.\n", this->nombre.c_str(), _anioActual - this->anioNacimiento);
}
