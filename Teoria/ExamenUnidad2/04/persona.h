#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

class Persona {
    private:
        std::string nombre;
        int edad;
    public:
        Persona(std::string n, int e): nombre(n), edad(e) {};

        virtual std::string toString() const = 0;

        std::string getNombre() const {
            return nombre;
        }

        int getEdad() const {
            return edad;
        }
};

std::ostream& operator <<(std::ostream &out, const Persona &o) {
    out << "\"" << o.toString() << "\",";
    return out;
}

#endif
