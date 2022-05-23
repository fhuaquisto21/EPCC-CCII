#include <vector>
#include <string>

class Alumno {
    private:
        int CUI;
        std::string nombre;
        std::vector<int> notas;
    public:
        Alumno();
        Alumno(int, std::string, std::vector<int>);
        ~Alumno();
        void setAlumno(int, std::string, std::vector<int>);
        void verificarNotas();
};
