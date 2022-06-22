#include <iostream>
#include "list.cpp"
using namespace std;

void printMenu() {
    cout << "[1] Agregar nodo al final" << endl;
    cout << "[2] Agregar nodo al principio" << endl;
    cout << "[3] Agregar nodo por índice" << endl;
    cout << "[4] Eliminar el último nodo" << endl;
    cout << "[5] Eliminar el primer nodo" << endl;
    cout << "[6] Eliminar nodo por índice" << endl;
    cout << "[7] Ordenar ascendentemente la lista" << endl;
    cout << "[8] Ordenar descendentemente la lista" << endl;
    cout << "[9] Mostrat lista" << endl;
    cout << "[0] Salir" << endl;
    cout << endl << "Option: ";
}

int main() {
    List* lista = new List();
    int opt;
    int index, value; 
    do {
        printMenu();
        cin >> opt;
        printf("\e[1;1H\e[2J");
        switch (opt) {
            case 0:
                break;
            case 1:
                cout << endl << "Valor del nodo: ";
                cin >> value;
                lista->addLastNode(value);
                break;
            case 2:
                cout << endl << "Valor del nodo: ";
                cin >> value;
                lista->addFirstNode(value);
                break;
            case 3:
                cout << endl << "Valor del nodo: ";
                cin >> value;
                cout << "Índice del nodo: ";
                cin >> index;
                lista->addIndexNode(value, index);
                break;
            case 4:
                lista->deleteLastNode();
                break;
            case 5:
                lista->deleteFirstNode();
                break;
            case 6:
                cout << endl << "Índice del nodo: ";
                cin >> index;
                lista->deleteIndexNode(index);
                break;
            case 7:
                lista->ascendingOrder();
                break;
            case 8:
                lista->descendingOrder();
                break;
            case 9:
                cout << endl;
                lista->printList();
                cout << endl;
                char temp;
                temp = cin.get();
                break;
        }
    } while (opt != 0);
}
