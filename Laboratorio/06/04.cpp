#include <iostream>

using namespace std;

class Array {
    private:
        int arr[5];
        int length;

    public:
        Array() { return; }
        Array(int _value) {
            this->arr[0] = _value;
            this->length = 1;
        }

        void addValue(int _value) {
            if (this->length >= 5) {
                printf("ERROR: El array está lleno!\n");
                return;
            }
            this->arr[this->length] = _value;
            ++this->length;
        }

        void removeLastValue() {
            if (this->length <= 0) {
                printf("\nERROR: El array está vacío!\n\n");
                return;
            }
            int aux[5];
            for (int i = 0; i < this->length; ++i) {
                aux[i] = this->arr[i];
            }
            copy(aux, aux + 5, this->arr);
            --this->length;
        }

        void showArr() {
            if (this->length <= 0) {
                printf("\nERROR: El array está vacío!\n\n");
                return;
            }
            printf("\n");
            for (int i = 0; i < this->length - 1; ++i) {
                printf("%i - ", this->arr[i]);
            }
            printf("%i\n\n", this->arr[this->length - 1]);
        }
};

int main() {
    Array *arr = new Array();
    int opt;
    do {
        printf("MENU\n");
        printf("[1] Mostrar array\n");
        printf("[2] Agregar dato al final\n");
        printf("[3] Eliminar último dato.\n");
        printf("[0] Salir\n");
        printf("\nOpción: ");
        cin >> opt;
        switch (opt) {
            case 0:
                break;
            case 1:
                arr->showArr();
                break;
            case 2:
                int value;
                printf("\nNuevo valor: ");
                cin >> value;
                arr->addValue(value);
                break;
            case 3:
                arr->removeLastValue();
                break;
        }
    } while (opt != 0);
    return 0;
}
