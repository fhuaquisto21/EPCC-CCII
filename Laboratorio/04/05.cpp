#include <iostream>
#include <string>

using namespace std;

int main() {
    string productos[10];
    int precios[10];
    int stock[10];
    int count = 0;

    while(true) {
        int opt = 0;
        printf("[1] Agregar producto.\n");
        printf("[2] Buscar producto.\n");
        printf("[3] Cambiar stock y precio.\n");
        printf("[0] Salir.\n");
        printf("\nOption: ");
        cin >> opt;

        if (opt == 1) {
            if (count + 1 < 10) {
                printf("[%i] Producto: ", count + 1);
                cin >> productos[count];
                printf("[%i] Precio: ", count + 1);
                cin >> precios[count];
                printf("[%i] Stock: ", count + 1);
                cin >> stock[count];
                count++;
            } else {
                printf("ERROR: No es posible agregar más productos.");
            }
        } else if (opt == 2) {
            string producto;
            printf("Producto: ");
            cin >> producto;
            
            int i;
            for (i = 0; i < (sizeof(productos)/sizeof(productos[0])); i++) {
                if (productos[i] == producto) {
                    break;
                }
            }

            printf("\nProducto: %s\n", productos[i].c_str());
            printf("\nPrecio: %i\n", precios[i]);
            printf("\nStock: %i\n", stock[i]);
        } else if (opt == 3) {
            string producto;
            printf("Producto: ");
            cin >> producto;
            int i;
            for (i = 0; i < (sizeof(productos)/sizeof(productos[0])); i++) {
                if (productos[i] == producto) {
                    break;
                }
            }
            printf("\nNuevo Stock: ");
            cin >> stock[i];
        } else if (opt == 0) {
            printf("\nSaliendo");
        }
    }

    return 0;
}
