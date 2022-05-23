#include <string>
#include "derivada1.cpp"

class CuentaJoven: private Cuenta {
    public:
        CuentaJoven(std::string, double, int);
        ~CuentaJoven();
        void imprimir();
};
