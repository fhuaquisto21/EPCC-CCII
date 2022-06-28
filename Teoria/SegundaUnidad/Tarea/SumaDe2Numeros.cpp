#include <iostream>
#include <queue>

int main() {
    int* arr = new int[5];
    std::queue<char> cola;
    arr[0] = -1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 5;

    int i = 0;
    int j = 4;

    int objetivo = 5;
    int *sol = new int[2];

    int aux;

    do {
        aux = arr[i] + arr[j];
    } while (aux != objetivo);
    return 0;
}
