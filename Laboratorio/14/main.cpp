#include <iostream>
#include "./Store.h"

void printMenu()
{
    std::cout << "[1] Añadir producto" << std::endl;
    std::cout << "[2] Comprar producto por código" << std::endl;
    std::cout << "[3] Comprar producto por nombre" << std::endl;
    std::cout << "[4] Actualizar producto por código" << std::endl;
    std::cout << "[0] Salir" << std::endl;
    std::cout << std::endl
              << "Option: ";
}

int main()
{
    Store *store = new Store();
    int opt = 0;
    do
    {
        printMenu();
        std::cin >> opt;
        printf("\e[1;1H\e[2J");
        switch (opt)
        {
        case 1:
        {
            int code;
            std::string name;
            float price;
            int quantity;
            std::cout << "Código: ";
            std::cin >> code;
            std::cout << "Nombre: ";
            std::cin >> name;
            std::cout << "Precio: ";
            std::cin >> price;
            std::cout << "Cantidad: ";
            std::cin >> quantity;
            store->addProduct(code, name, price, quantity);
            break;
        }
        case 2:
        {
            int code;
            std::cout << "Código: ";
            std::cin >> code;
            store->sellProductCode(code);
            break;
        }
        case 3:
        {
            std::string name;
            std::cout << "Nombre: ";
            std::cin >> name;
            store->sellProductName(name);
            break;
        }
        case 4:
        {
            int code;
            std::string name;
            float price;
            int quantity;
            std::cout << "Código: ";
            std::cin >> code;
            std::cout << "Nombre: ";
            std::cin >> name;
            std::cout << "Precio: ";
            std::cin >> price;
            std::cout << "Cantidad: ";
            std::cin >> quantity;
            store->updateProduct(code, name, price, quantity);
            break;
        }
        default:
        {
            break;
        }
        }
    } while (opt != 0);
    return 0;
}
