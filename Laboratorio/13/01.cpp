#include <iostream>

struct FNacimiento {
    int day;
    int month;
    int year;
};

struct Persona {
    char* name;
    FNacimiento fechaNacimiento;
};

int main() {
    int monthToday = 7;
    int n;
    std::cout << "Cantidad de alumnos: ";
    std::cin >> n;
    Persona personas[n];

    for (int i = 0; i < n; ++i) {
        char* _name = new char[50];
        int _day, _month, _year;
        std::cout << "Nombre: ";
        std::cin >> _name;
        std::cout << "Día de nacimiento: ";
        std::cin >> _day;
        std::cout << "Mes de nacimiento: ";
        std::cin >> _month;
        std::cout << "Año de nacimiento: ";
        std::cin >> _year;

        Persona aux = {_name, _day, _month, _year};
        personas[i] = aux;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Alumnos que cumple años en Julio:" << std::endl;
    for (int i = 0; i < n; ++i) {
        if (personas[i].fechaNacimiento.month == monthToday) {
            std::cout << personas[i].name << std::endl;
        }
    }
    return 0;
}
