#include <iostream>
#include <string>
#include "derivada.cpp"

using namespace std;

int main() {
    Alumno *alumno = new Alumno();
    int edad;
    string nombre;
    printf("Nombre del alumno: ");
    cin >> nombre;
    printf("Edad del alumno: ");
    cin >> edad;
    alumno->setAlumno(edad, nombre);
    printf("\n");
    alumno->mostrarAlumno();
    return 0;
}
