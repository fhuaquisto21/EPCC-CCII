#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string name, lastname_1, lastname_2, email;

    printf("Escriba su primer nombre: ");
    getline(cin, name);

    printf("Escriba su apellido paterno: ");
    getline(cin, lastname_1);

    printf("Escriba su apellido materno: ");
    getline(cin, lastname_2);

    email = name.substr(0, 1) + lastname_1 + lastname_2.substr(0, 1) + "@unsa.edu.pe";
    printf("Felicidades! Este es su nuevo correo institucional\nemail: %s\n", email.c_str());

    return 0;
}

