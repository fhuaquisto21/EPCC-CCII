#include <iostream>
#include <string>
#include "class.cpp"

using namespace std;

int main() {
    Persona *pers = new Persona();
    int anioNacimiento, anioActual;
    string nombre;
    printf("Nombre: ");
    cin >> nombre;
    printf("Año de nacimiento: ");
    cin >> anioNacimiento;
    printf("Año actual: ");
    cin >> anioActual;
    pers->setPersona(anioNacimiento, nombre);
    pers->getEdad(anioActual);
    return 0;
}
