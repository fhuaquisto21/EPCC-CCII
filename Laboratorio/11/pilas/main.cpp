#include <iostream>
#include "pila.cpp"
using namespace std;

void printMenu() {
    cout << "[1] Agregar nodo" << endl;
    cout << "[2] Eliminar nodo" << endl;
    cout << "[3] Buscar nodo" << endl;
    cout << "[4] Imprimir pila" << endl;
    cout << "[0] Salir" << endl;
    cout << endl << "Option: ";
}

int main() {
    Pila* pila = new Pila();
    int opt = 0;
    int value;
    do {
        printMenu();
        cin >> opt;
        printf("\e[1;1H\e[2J");
        switch (opt) {
            case 0:
                break;
            case 1:
                cout << "Valor del nuevo nodo: ";
                cin >> value;
                pila->push(value);
                break;
            case 2:
                pila->pop();
                break;
            case 3:
                cout << "ïndice del nodo a buscar: ";
                cin >> value;
                cout << "Su valor es: " << pila->search(value) << endl;
                break;
            case 4:
                pila->printPila();
                break;
        }
    } while (opt != 0);
}
