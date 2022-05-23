#include <iostream>
#include "class.cpp"

using namespace std;

void mostrarMenu() {
    printf("ARRAY:\n");
    printf("[1] Agregar un dato al final\n");
    printf("[2] Eliminar un dato\n");
    printf("[3] Mostrar array\n");
    printf("[0] Salir\n");
    printf("Selección: ");
}

int main() {
    Array *arr = new Array();
    int opt, value;
    do {
        mostrarMenu();
        cin >> opt;
        switch (opt) {
            case 1:
                printf("\nDato a agregar: ");
                cin >> value;
                arr->agregarDato(value);
                break;
            case 2:
                printf("\nDato a eliminar: ");
                cin >> value;
                arr->eliminarData(value);
                break;
            case 3:
                printf("\nArray\n");
                arr->mostrarArray();
                printf("\n");
                break;
        }
    } while (opt != 0);


    return 0;
}
