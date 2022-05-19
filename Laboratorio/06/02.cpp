#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Alumno {
    private:
        int CUI;
        vector<int> notas;
        string nombre;

    public:
        Alumno(int _CUI, vector<int> _notas, string _nombre) {
            this->CUI = _CUI;
            this->notas = _notas;
            this->nombre = _nombre;
        }

        float getPromedio() {
            float sum = 0;
            for (int nota: this->notas) {
                sum += nota;
            }
            return sum / 3;
        }

        void printAlumno() {
            printf("\nALUMNO NOTAS:\n");
            printf("CUI: %i\n", this->CUI);
            printf("Nombre: %s\n", this->nombre.c_str());
            for (int nota: this->notas) {
                printf("\tNota: %i\n", nota);
            }
            float prom = this->getPromedio();
            printf("\nPromedio: %.2f\n", prom);
            if (prom >= 10.5) {
                printf("Felicidades, usted aprobó el curso!\n");
            } else {
                printf("Lo siento, pero usted desaprobó este curso.\n");
            }
        }



};

int main() {
    int cui;
    vector<int> notas;
    string nombre;
    printf("Nombre: ");
    cin >> nombre;
    printf("CUI: ");
    cin >> cui;
    for (int i = 0; i < 3; ++i) {
        int aux;
        printf("Nota %i: ", i + 1);
        cin >> aux;
        notas.push_back(aux);
    }
    Alumno *alu = new Alumno(cui, notas, nombre);
    alu->printAlumno();
    return 0;
}
