#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:
        int edad;
        string nombre;
    public:
        void setEdad(int _edad) {
            this->edad = _edad;
        }
        void setNombre(string _nombre) {
            this->nombre = _nombre;
        }
        void printPersona() {
            printf("%s tiene %i años.\n", this->nombre.c_str(), this->edad);
        }
};

class Alumno: public Persona {
    public:
        Alumno(int _edad, string _nombre) {
            this->setNombre(_nombre);
            this->setEdad(_edad);
        }
};

int main() {
    int edad;
    string nombre;

    printf("Nombre: ");
    cin >> nombre;
    printf("Edad: ");
    cin >> edad;
    Alumno *alumno = new Alumno(edad, nombre);
    alumno->printPersona();
    return 0;
}
