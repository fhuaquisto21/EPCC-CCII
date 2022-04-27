#include <iostream>

using namespace std;

string toBinary(int num) {
    int pot = 1;
    string final = "";
    for (int i = 0; i < 128; i++) {
        pot *= 2;
        if (pot > num) {
            pot /= 2;
            break;
        }
    }

    while (pot != 1) {
        if (num > pot) {
            num -= pot;
            final += "1";
        } else {
            final += "0";
        }
        pot /= 2;
    }

    return final;
}

int main() {
    int num;
    printf("Num: ");
    cin >> num;
    string final = toBinary(num);
    printf("El numero \"%i\" en binario es: %s\n", num, final.c_str());

    return 0;
}

