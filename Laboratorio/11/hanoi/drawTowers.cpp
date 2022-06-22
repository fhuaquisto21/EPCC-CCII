#include <iostream>

void drawRow(int _value, int _maxLevel) {
    for (int i = 0; i < _maxLevel - (_value == 0 ? 1 : _value); ++i) {
        std::cout << " ";
    }
    if (_value != 0) {
        for (int i = 0; i < (_value * 2) - 1; ++i) {
            std::cout << "#";
        }
    } else {
        std::cout << "|";
    }
    for (int i = 0; i < _maxLevel - (_value == 0 ? 1 : _value); ++i) {
        std::cout << " ";
    }
}

void drawTowerGeneral(int _maxLevel, int** _towers) {
    /** Cantidad de niveles de las torres */
    for (int i = 0; i <= _maxLevel; ++i) {
        /** Cantidad de torres a mostrar */
        for (int j = 0; j < 3; ++j) {
            if (i == 0) {
                drawRow(0, _maxLevel);
                std::cout << "\t";
            } else {
                drawRow(_towers[j][i - 1], _maxLevel); 
                std::cout << "\t";
            }
        } 
        std::cout << std::endl;
    } 
}

int main() {
    int** values = new int* [3];
    for (int i = 0; i < 3; ++i) {
        int* towers = new int[5];
        for (int j = 0; j < 5; ++j) {
            towers[j] = j + 1;
        }
        values[i] = towers;
    }

    drawTowerGeneral(5, values);
    /*
    drawRow(1, 5);
    std::cout << std::endl;
    drawRow(2, 5);
    std::cout << std::endl;
    drawRow(3, 5);
    std::cout << std::endl;
    drawRow(4, 5);
    std::cout << std::endl;
    drawRow(5, 5);
    std::cout << std::endl;
    */
}
