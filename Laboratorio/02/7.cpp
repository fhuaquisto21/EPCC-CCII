#include <iostream>

using namespace std;

int main() {
    int n;
    printf("Cantidad de estudiantes: ");
    cin >> n;

    for (int i = 0; i < n; i++) {
        printf("Estudiante [%i]\n", i + 1);
        float sum = 0;
        for (int y = 0; y < 3; y++) {
            int nota;
            printf("Nota del estudiante [%i]: ", y + 1);
            cin >> nota;
            sum += nota;
        }
        printf("Promedio de nota del estudiante [%i]: %.2f\n\n", i + 1, sum / 3);
    }

    return 0;
}
