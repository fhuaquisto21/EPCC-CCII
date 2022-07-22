#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList lista1(12);
    LinkedList lista2(15);
    LinkedList lista3;
    lista3 = lista1 + lista2;

    std::cout << lista3 << std::endl;
    return 0;
}
