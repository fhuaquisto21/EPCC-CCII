#include <iostream>

struct Nota {
    int fase_1;
    int fase_2;
    int fase_3;
    int proyecto;
};

struct Alumno {
    char* name;
    char grupo;
    Nota notas;
};

int main() {
    int n;
    std::cout << "Cantidad de alumnos: ";
    std::cin >> n;
    Alumno alumnos[n];

    for (int i = 0; i < n; ++i) {
        char* _name = new char[50];
        char _grupo;
        int _fase_1, _fase_2, _fase_3, _proyecto;
        std::cout << "Nombre: ";
        std::cin >> _name;
        std::cout << "Grupo: ";
        std::cin >> _grupo;
        std::cout << "Nota fase 1; ";
        std::cin >> _fase_1;
        std::cout << "Nota fase 2; ";
        std::cin >> _fase_2;
        std::cout << "Nota fase 3; ";
        std::cin >> _fase_3;
        std::cout << "Nota proyecto; ";
        std::cin >> _proyecto;

        Alumno aux = {_name, _grupo, _fase_1, _fase_2, _fase_3, _proyecto};
        alumnos[i] = aux;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Notas de los alumnos:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Alumno: " << alumnos[i].name;
        float notaFinal = (alumnos[i].notas.fase_1 * .15) + (alumnos[i].notas.fase_2 * .2) + (alumnos[i].notas.fase_3 * .25) + (alumnos[i].notas.proyecto * .4);
        std::cout << "; Nota final: " << notaFinal << std::endl;
        std::cout << std::endl;
    }
    return 0;
}
