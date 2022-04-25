#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    float sum;
    printf("N: ");
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
    }

    printf("La media es: %f\n", sum / n);

    return 0;
}
