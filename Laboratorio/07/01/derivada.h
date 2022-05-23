#include <string>
#include "base.h"

class Alumno: public Persona {
    public:
        Alumno();
        ~Alumno();
        void setAlumno(int, std::string);
        void mostrarAlumno();
};
