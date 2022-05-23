#include <string>
#include "base1.cpp"
#include "base2.cpp"

class Objecto: public Color, public Material {
    public:
        std::string nombre;
        Objecto();
        ~Objecto();
        void agregarObjecto(std::string, std::string, int, int, int);
        void mostrarObjecto();
};
