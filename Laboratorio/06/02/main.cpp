#include <iostream>
#include <string>
#include <vector>
#include "class.cpp"

using namespace std;

int main() {
    Alumno *alum = new Alumno();
    int cui;
    string nombre;
    vector<int> notas;
    printf("Nombre: ");
    cin >> nombre;
    printf("CUI: ");
    cin >> cui;
    printf("Notas: ");
    for (int i = 1; i < 4; ++i) {
        int aux;
        printf("\t[%i] Nota: ", i);
        cin >> aux;
        notas.push_back(aux);
    }
    alum->setAlumno(cui, nombre, notas);
    cout << endl;
    alum->verificarNotas();
    return 0;
}
