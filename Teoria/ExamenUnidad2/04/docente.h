#ifndef DOCENTE_H
#define DOCENTE_H

#include "persona.h"

class Docente : public Persona {
    private:
        std::string tipo;
    public:
        Docente(std::string n, int e): Persona(n, e), tipo("docente") {};

        std::string toString() const override {
            return this->getNombre() + " es un " + tipo + " y tiene " + std::to_string(this->getEdad()) + " años.";
        }
};

#endif
