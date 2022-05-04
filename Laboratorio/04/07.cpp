#include <iostream>

using namespace std;

void mostrarMatriz(int ** matriz) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%i  ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void columnRight(int ** matriz) {
    int j;
    int temp; 
 
    for (int i = 0; i < 3; ++i) {
        temp = matriz[i][3 - 1]; 
 
        for (j = 3 - 1; j > 0; --j) {
            matriz[i][j] = matriz[i][j - 1]; 
        }
        matriz[i][j] = temp; 
    }
}

void columnLeft(int ** matriz) {
    int j;
    int temp; 
 
    for (int i = 0; i < 3; ++i) {
        temp = matriz[i][0]; 
 
        for (j = 0; j < 3; ++j) {
            matriz[i][j] = matriz[i][j + 1];
        }
        matriz[i][2] = temp; 
    }

}

void rowTop(int ** matriz) {
    int * temp = matriz[0];
    for (int i = 0; i < 2; ++i) {
        matriz[i] = matriz[i + 1];
    }
    matriz[2] = temp;
}

void rowDown(int ** matriz) {
    int * temp = matriz[2];
    for (int i = 2; i > 0; --i) {
        matriz[i] = matriz[i - 1];
    }
    matriz[0] = temp;

}

int main() {
    int ** matriz;
    matriz = new int * [3];
    for (int i = 0; i < 3; ++i) {
        matriz[i] = new int [3];
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("[%i][%i] Valor: ", i + 1, j + 1);
            cin >> matriz[i][j];
        }
    }


    int opt = 0;
    do {
        printf("\n[1] Mover columna hacia la derecha.");
        printf("\n[2] Mover columna hacia la izquierda.");
        printf("\n[3] Mover fila hacia arriba.");
        printf("\n[4] Mover file hacia abajo.");
        printf("\n[5] Mostrar matriz.");
        printf("\n[0] Salir.\n");
        printf("\nOption: ");
        cin >> opt;
        if (opt == 1) {
            columnRight(matriz);
        } else if (opt == 2) {
            columnLeft(matriz);
        } else if (opt == 3) {
            rowTop(matriz);
        } else if (opt == 4) {
            rowDown(matriz);
        } else if (opt == 5) {
            mostrarMatriz(matriz);
        } else {
            printf("\nSaliendo.\n");
        }
    } while (opt != 0);
    return 0;
}
