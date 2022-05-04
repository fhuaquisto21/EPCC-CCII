/* Fabricio Huaquisto Quispe
 * 20210678 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct persona {
    string nombre;
    string apellido;
    int edad;
    int dni;
};

int main() {
    vector<persona> personas;
    persona aux;
    for (int i = 0; i < 3; ++i) {
        printf("[%i] Nombre: ", i + 1);
        cin >> aux.nombre;
        printf("[%i] Apellido: ", i + 1);
        cin >> aux.apellido;
        printf("[%i] Edad: ", i + 1);
        cin >> aux.edad;
        printf("[%i] DNI: ", i + 1);
        cin >> aux.dni;
        personas.push_back(aux);
        printf("\n");
    }

    printf("\n\n");

    for (persona per: personas) {
        printf("La persona con nombre completo %s, %s con una edad de %i tiene un dni: %i.\n\n", per.nombre.c_str(), per.apellido.c_str(), per.edad, per.dni);
    }
    return 0;
}
