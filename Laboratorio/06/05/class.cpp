#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "class.h"

using namespace std;


Cubo::Cubo() {
    vector<int> nums;
    srand(time(NULL));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            while (true) {
                bool aux = true;
                int num = 1 + rand() % (10 - 1);
                for (int n: nums) {
                    if (n == num) {
                        aux = false;
                        break;
                    }
                }
                if (aux) {
                    nums.push_back(num);
                    this->matriz[i][j] = num;
                    break;
                }
            }
        }
    }

}

Cubo::~Cubo() {}

vector<int> Cubo::buscarDato(int _dato) {
    vector<int> coords;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (this->matriz[i][j] == _dato) {
                coords.push_back(i);
                coords.push_back(j);
            }
        }
    }
    return coords;
}

void Cubo::mostrarMatriz() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%i  -  ", this->matriz[i][j]);
        }
        printf("%i\n", this->matriz[i][2]);
    }
    printf("\n");
}
