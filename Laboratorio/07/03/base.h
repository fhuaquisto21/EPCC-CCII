#include <string>

class ProductoBancario {
    public:
        std::string cliente;
        double saldo;
        int numProductos;

        ProductoBancario(std::string, double, int);
        ~ProductoBancario();
        void imprimir();
};
