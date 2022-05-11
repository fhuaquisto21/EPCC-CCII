#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

template <typename T>
class Node {
    public:
        Node *next;
        T value;

        Node(T _value) {
            this->value = _value;
            this->next = NULL;
        }
};

void showMenu(int *met) {
    printf("[1] - Mostrar lista.\n");
    printf("[2] - Agregar nodo.\n");
    printf("[3] - Buscar nodo.\n");
    printf("[4] - Eliminar nodo.\n");
    printf("[0] - Salir.\n");
    printf("\nOption: ");
    cin >> *met;
}

template <class N, typename S, typename C>
void addNode(N *&node, S _value) {
    N *auxNode = node;
    N *newNode = new N<S>(_value);
    while (auxNode->next != NULL ) {
        auxNode = auxNode->next;
    }

    auxNode->next =

}

int main() {

    return 0;
}
