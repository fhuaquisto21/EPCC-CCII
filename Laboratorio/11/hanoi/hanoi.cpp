#include <iostream>
#include "hanoi.h"

Hanoi::Hanoi(int _level) {
    this->level = _level;
    this->towers = new Tower* [3];
    for (int i = 0; i < 3; ++i) {
        this->towers[i] = new Tower(_level);
    }
    for (int i = _level; i > 0; --i) {
        this->towers[0]->push(i);
    }
}

Hanoi::~Hanoi() {}

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

int** Hanoi::transformHanoi() {
    int** values = new int* [3];
    for (int i = 0; i < 3; ++i) {
        int* towerValues = new int[this->level];
        Tower* auxTower = this->towers[i];
        Node* auxNode = auxTower->getHead();
        for (int j = 0; j < this->level; ++j) {
            towerValues[j] = auxNode->getValue();
            auxNode = auxNode->getNext();
        }
        values[i] = towerValues;
    }
    return values;
}

void Hanoi::printMove() {
    int** values = this->transformHanoi();
    for (int i = 0; i <= this->level; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == 0) {
                drawRow(0, this->level);
                std::cout << "\t";
            } else {
                drawRow(values[j][i - 1], this->level);
                std::cout << "\t";
            }
        } 
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}

void auxResolver(int _n, Tower* _a, Tower* _b, Tower* _c) {
    if (_n == 1) {
        _a->push(_c->pop());
    } else {
        auxResolver(_n - 1, _a, _b, _c);
        _a->push(_c->pop());
        auxResolver(_n - 1, _b, _c, _a);
    }
}

/*
void Hanoi::resolveGame(int _aux) {
    int aux = this->level - _aux;
    if (aux == 1) {
        this->towers[1]->push(this->towers[0]->pop());
        this->printMove();
    } else {
        this->resolveGame(_aux + 1);
        this->towers[1]->push(this->towers[0]->pop());
        this->printMove();
        Tower* auxTower = this->towers[0];
        this->towers[0] = this->towers[1];
        this->towers[1] = this->towers[2];
        this->towers[2] = auxTower;
        this->resolveGame(_aux + 1);
    }
}
*/

void Hanoi::resolveGame(int aux, Tower* A, Tower* C, Tower* B) {
    if (aux == 1) {
        C->push(A->pop());
        this->printMove();
    } else {
        this->resolveGame(aux - 1, A, B, C);
        C->push(A->pop());
        this->printMove();
        this->resolveGame(aux - 1, B, C, A);
    }
}

Tower** Hanoi::getTower() {
    return this->towers;
}
