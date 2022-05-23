#include <string>
#include "base.cpp"

class Cuenta: public ProductoBancario {
    public:
        Cuenta(std::string, double, int);
        ~Cuenta();
        void imprimir();
};
