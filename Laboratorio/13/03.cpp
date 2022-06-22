#include <iostream>

struct Jugador{
    char* nombre;
    int edad;
    float talla;
};

int main() {
    Jugador jugadores[10];

    for (int i = 0; i < 10; ++i) {
        char* _nombre = new char[50];
        int _edad;
        float _talla;
        std::cout << "Nombre: ";
        std::cin >> _nombre;
        std::cout << "Edad: ";
        std::cin >> _edad;
        std::cout << "Talla; ";
        std::cin >> _talla;

        Jugador aux = {_nombre, _edad, _talla };
        jugadores[i] = aux;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Jugadores menores de 20 y de talla +1.70:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (jugadores[i].edad < 20) {
            if (jugadores[i].talla > 1.7) {
                std::cout << "Jugador: " << jugadores[i].nombre << std::endl;
            }
        }
    }
    return 0;
}
