#ifndef ESTUDIANTE_H 
#define ESTUDIANTE_H

#include "persona.h"

class Estudiante : public Persona {
    private:
        std::string tipo;
    public:
        Estudiante(std::string n, int e): Persona(n, e), tipo("estudiante") {};

        std::string toString() const override {
            return this->getNombre() + " es un " + tipo + " y tiene " + std::to_string(this->getEdad()) + " años.";
        }
};

#endif
