#include <iostream>
#include "cola.cpp"

void printMenu() {
    std::cout << "[1] Push" << std::endl;
    std::cout << "[2] Pop" << std::endl;
    std::cout << "[3] Search" << std::endl;
    std::cout << "[4] Print" << std::endl;
    std::cout << "[0] Salir" << std::endl;
    std::cout << std::endl << "Option: ";
}

int main() {
    Cola* cola = new Cola();
    int opt, index, value;
    do {
        printMenu();
        std::cin >> opt;
        printf("\e[1;1H\e[2J");
        switch (opt) {
            case 0:
                break;
            case 1:
                std::cout << "Value: ";
                std::cin >> value;
                cola->push(value);
                break;
            case 2:
                cola->pop();
                break;
            case 3:
                std::cout << "Index: ";
                std::cin >> index;
                std::cout << "El valor del nodo es: " << cola->search(index)->getValue() << std::endl;
                break;
            case 4:
                cola->printCola();
                break;
        }
    } while (opt != 0);
    
    return 0;
}
