/* Fabricio Huaquisto QUispe
 * 20210678 */
#include <iostream>

using namespace std;

void primo(int x) {
    for (int i = 2; i <= x; ++i) {
        int count = 0;
        for (int y = 1; y <= i; ++y) {
            if (i % y == 0) {
                ++count;
            }
        }
        if (count == 2) {
            printf("%i\n", i);
        } 
    }
}

int main() {
    int x;
    printf("Valor de x: ");
    cin >> x;
    primo(x);
    return 0;
}
