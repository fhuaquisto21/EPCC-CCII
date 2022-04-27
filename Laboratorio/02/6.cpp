#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> data = { 0, 1 };
    int n;

    printf("Cantidad de números de la sucesión de Fibinacci a imprimir: ");
    cin >> n;

    for (int value: data) {
        cout << value << endl;
    }

    for (int i = 2; i < n; i++) {
        data.push_back(data[i - 2] + data[i -1]);
        cout << data[i] << endl;
    }
    
    return 0;
}
