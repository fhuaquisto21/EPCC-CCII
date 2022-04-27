#include <iostream>

using namespace std;

int main() {
    int x, y;
    printf("Valor de X (mayor que 0): ");
    cin >> x;
    printf("Valor de Y (mayor que %i): ", x);
    cin >> y;

    int countPrimos = 0;

    for (int i = x; i <= y; i++) {
        int count = 0;
        for (int z = 1; z <= i; z++) {
            if (i % z == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << i << endl;
            countPrimos++;
        }
    }

    if (countPrimos == 0) {
        for (int i = x; i >= 1; i--) {
            int count = 0; 
            for (int z = 1; z <= i; z++) {
                if (i % z == 0) {
                    count++;
                }
            }
            if (count == 2) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
