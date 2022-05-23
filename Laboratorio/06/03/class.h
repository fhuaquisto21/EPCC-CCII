#include <iostream>
#include <string>

class Persona {
    private:
        int anioNacimiento;
        std::string nombre;
    public:
        Persona();
        Persona(int, std::string);
        ~Persona();
        void getEdad(int);
        void setPersona(int, std::string);
};
