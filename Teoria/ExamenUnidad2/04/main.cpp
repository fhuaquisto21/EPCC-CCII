#include <iostream>
#include "docente.h"
#include "estudiante.h"
#include "dinamicarrar.h"

int main() {
    Persona **personas = new Persona*[5];
    personas[0] = new Docente("Jose", 32);
    personas[1] = new Docente("Mario", 35);
    personas[2] = new Estudiante("Juan", 18);
    personas[3] = new Estudiante("Pedro", 21);
    personas[4] = new Estudiante("Carlos", 20);

    DynamicArray<Persona*> da(personas, 5);
    std::cout << da << std::endl;
    return 0;
}
