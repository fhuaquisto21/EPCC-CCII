#include <iostream>
#include "class.h"
#include <string>
#include <vector>

using namespace std;

Alumno::Alumno() {}

Alumno::Alumno(int _CUI, string _nombre, vector<int> _notas) {
    this->CUI = _CUI;
    this->nombre = _nombre;
    this->notas = _notas;
}

Alumno::~Alumno() {}

void Alumno::setAlumno(int _CUI, string _nombre, vector<int> _notas) {
    this->CUI = _CUI;
    this->nombre = _nombre;
    this->notas = _notas;
}

void Alumno::verificarNotas() {
    printf("\nNombre: %s\n", this->nombre.c_str());
    printf("CUI: %i\n", this->CUI);
    printf("Notas:");
    float sum = 0;
    for (int value: this->notas) {
        printf("\t%i puntos\n", value);
        sum += value;
    }
    printf("Usted: %s con %.2f\n", sum / 3 >= 10.5 ? "Aprobó" : "No aprobó", sum / 3);
}
