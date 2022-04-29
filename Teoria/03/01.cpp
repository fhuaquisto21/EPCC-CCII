#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {};
    int mayor_1 = 0;
    int mayor_2 = 0;
    int n;
    printf("Valor de N: ");
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        printf("[%i] Ingrese un valor: ", i + 1);
        cin >> num;
        nums.push_back(num);
        if (num > mayor_1) {
            mayor_1 = num;
        }
    }

    for (int num: nums) {
        if (num > mayor_2 & num < mayor_1) {
            mayor_2 = num;
        }
    }

    printf("El mayor número que se puede obtener multiplicando %i y %i es: %i\n", mayor_1, mayor_2, mayor_2 * mayor_1);
    return 0;
}
