#include <iostream>

using namespace std;

int main() {
    int n;
    printf("Altura del triángulo: ");
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int x = 0; x <= i; x++) {
            printf("*");
        }
        cout << endl;
    }
    return 0;
}
