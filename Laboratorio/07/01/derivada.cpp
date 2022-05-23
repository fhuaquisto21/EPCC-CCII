#include <iostream>
#include <string>
#include "derivada.h"

using namespace std;

Alumno::Alumno() {}

void Alumno::setAlumno(int _edad, string _nombre) {
    this->edad = _edad;
    this->nombre = _nombre;
}

void Alumno::mostrarAlumno() {
    printf("ALUMNO:\n");
    printf("Nombre: %s\n", this->nombre.c_str());
    printf("Edad: %i\n", this->edad);
}
