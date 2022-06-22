#include <iostream>

struct Empleado{
    char* nombre;
    char sexo;
    float sueldo;
};

int main() {
    int n;
    std::cout << "Cantidad de empleados: ";
    std::cin >> n;
    Empleado empleados[n];

    for (int i = 0; i < n; ++i) {
        char* _nombre = new char[50];
        char _sexo;
        float _sueldo;
        std::cout << "Nombre: ";
        std::cin >> _nombre;
        std::cout << "Sexo [M, H]: ";
        std::cin >> _sexo;
        std::cout << "Sueldo; ";
        std::cin >> _sueldo;

        Empleado aux = {_nombre, _sexo, _sueldo };
        empleados[i] = aux;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    float minSueldo = empleados[0].sueldo, maxSueldo = empleados[0].sueldo;
    for (int i = 0; i < n; ++i) {
        if (empleados[i].sueldo > maxSueldo) {
            maxSueldo = empleados[i].sueldo;
        }
        if (empleados[i].sueldo < minSueldo) {
            minSueldo = empleados[i].sueldo;
        }
    }

    std::cout << "El peor sueldo: " << minSueldo << std::endl;
    std::cout << "El mejor sueldo: " << maxSueldo << std::endl;
    return 0;
}
