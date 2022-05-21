#include <iostream>

using namespace std;

int main() {
    double celcius, fahrenheit;
    printf("Grados en celcius: ");
    cin >> celcius;
    fahrenheit = celcius * 9 / 5 + 32;
    printf("%.1f.C = %.1f.F\n", celcius, fahrenheit);
    return 0;
}
