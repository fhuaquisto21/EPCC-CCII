#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:
        int anios;
        string nombre;

    public:
        Persona(int _anioActual, int _anioNacimiento, string _nombre) {
            this->nombre = _nombre;
            this->anios = _anioActual - _anioNacimiento;
        }

        void printPersona() {
            printf("\nDATOS DE LA PERSONA\n");
            printf("Nombre: %s.\n", this->nombre.c_str());
            printf("Edad: %i.\n", this->anios);
        }

};

int main() {
    int anioActual, anioNacimiento;
    string nombre;

    printf("Nombre: ");
    cin >> nombre;
    printf("Año de nacimiento: ");
    cin >> anioNacimiento;
    printf("Año actual: ");
    cin >> anioActual;

    Persona *person = new Persona(anioActual, anioNacimiento, nombre);
    person->printPersona();

    return 0;
}
