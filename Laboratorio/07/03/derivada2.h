#include <string>
#include "base.cpp"

class Prestamo: protected ProductoBancario {
    public:
        Prestamo(std::string, double, int);
        ~Prestamo();
        void imprimir();
};
