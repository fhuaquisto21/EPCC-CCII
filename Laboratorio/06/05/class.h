#include <vector>

class Cubo {
    private:
        int matriz[3][3];
    public:
        Cubo();
        ~Cubo();
        std::vector<int> buscarDato(int);
        void mostrarMatriz();
};
