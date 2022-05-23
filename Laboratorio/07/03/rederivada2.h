#include <string>
#include "derivada2.cpp"

class Hipoteca: public Prestamo {
    public:
        Hipoteca(std::string, double, int);
        ~Hipoteca();
        void imprimir();
};
