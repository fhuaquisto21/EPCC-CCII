#include <iostream>
#include "list.cpp"

using namespace std;

int main() {
    List* lista = new List(1);
    for (int i = 2; i < 10; i++) {
        lista->addLastNode(i);
    }
    lista->addFirstNode(0);
    lista->addLastNode(11);
    lista->addIndexNode(10, 10);
    lista->deleteLastNode();
    lista->deleteFirstNode();
    lista->deleteIndexNode(5);
    lista->addLastNode(35);
    lista->addLastNode(64);
    lista->addLastNode(12);
    lista->addLastNode(5);
    lista->ascendingOrder();
    lista->printList();
    lista->descendingOrder();
    lista->printList();
}
